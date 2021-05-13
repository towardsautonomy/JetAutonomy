#!/usr/bin/python3

import time
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Imu, Temperature, MagneticField
from jetpilot_msgs.msg import OrientationEuler

from adafruit_extended_bus import ExtendedI2C as I2C
import adafruit_bno055

class ImuBNO055Node(Node):

    def __init__(self):
        super().__init__('imu_bno055_node')
        self.publisher_imu_fused = self.create_publisher(Imu, '/imu_bno055/fused', 10)
        self.publisher_temperature = self.create_publisher(Temperature, '/imu_bno055/temperature', 10)
        self.publisher_magfield = self.create_publisher(MagneticField, '/imu_bno055/magnetic_field', 10)
        self.publisher_orientation_euler = self.create_publisher(OrientationEuler, '/imu_bno055/orientation/euler', 10)

        # declare configurable parameters
        self.declare_parameter('i2c_bus_id', 0)
        self.declare_parameter('probe_freq', 100.0)

        # Get the parameters
        self.i2c_bus_id = int(self.get_parameter('i2c_bus_id').value)
        self.probe_freq = float(self.get_parameter('probe_freq').value)

        # initialize imu
        i2c = I2C(self.i2c_bus_id)
        self.sensor = adafruit_bno055.BNO055_I2C(i2c)
        self.frame_id = 'imu_link'

        self.get_logger().info('IMU Adafruit BNO055 initialized.')

        # wait for gyroscope to be calibrated (accel and mag takes a long time and requires certain movement)
        self.get_logger().info('Calibrating IMU.')
        while (self.sensor.calibration_status[1] < 3):
            time.sleep(0.1)
        self.get_logger().info('IMU Calibrated.')

        # spin the node
        self.spin()

    def spin(self):

        while rclpy.ok():
            imu_msg = Imu()
            temperature_msg = Temperature()
            magfield_msg = MagneticField()
            orientation_euler_msg = OrientationEuler()

            # get sensor readings
            imu_msg.header.stamp = self.get_clock().now().to_msg()
            imu_msg.header.frame_id = self.frame_id
            # orientation in quarternions
            quaternion = self.sensor.quaternion
            imu_msg.orientation.x = quaternion[0]
            imu_msg.orientation.y = quaternion[1]
            imu_msg.orientation.z = quaternion[2]
            imu_msg.orientation.w = quaternion[3]
            # linear acceleration (m/sec^2) without effect of gravity
            lin_accel = self.sensor.linear_acceleration
            imu_msg.linear_acceleration.x = lin_accel[0]
            imu_msg.linear_acceleration.y = lin_accel[1]
            imu_msg.linear_acceleration.z = lin_accel[2]
            # # acceleration
            # accel = self.sensor.acceleration
            # angular velocity (rad/sec)
            ang_vel = self.sensor.gyro
            imu_msg.angular_velocity.x = ang_vel[0]
            imu_msg.angular_velocity.y = ang_vel[1]
            imu_msg.angular_velocity.z = ang_vel[2]
            # set covariance to -1
            imu_msg.orientation_covariance[0] = -1
            imu_msg.linear_acceleration_covariance[0] = -1
            imu_msg.angular_velocity_covariance[0] = -1

            # get temperature readings
            temperature_msg.header.stamp = self.get_clock().now().to_msg()
            temperature_msg.header.frame_id = self.frame_id
            temperature_msg.temperature = float(self.sensor.temperature)
            temperature_msg.variance = 0.0

            # get magnetic field readings
            magfield_msg.header.stamp = self.get_clock().now().to_msg()
            magfield_msg.header.frame_id = self.frame_id
            magnetic_field = self.sensor.magnetic
            magfield_msg.magnetic_field.x = magnetic_field[0]
            magfield_msg.magnetic_field.y = magnetic_field[1]
            magfield_msg.magnetic_field.z = magnetic_field[2]
            magfield_msg.magnetic_field_covariance = [0.0]*9

            # get absolute orientation
            orientation_euler_msg.header.stamp = self.get_clock().now().to_msg()
            orientation_euler_msg.header.frame_id = self.frame_id
            abs_orientation_euler = self.sensor.euler
            # obtain orientation in FLU (x->front, y->left, z->up)
            orientation_euler_msg.roll = -abs_orientation_euler[2]
            orientation_euler_msg.pitch = -abs_orientation_euler[1]
            orientation_euler_msg.yaw = abs_orientation_euler[0] # heading
            orientation_euler_msg.orientation_covariances[0] = -1

            # pyblish the messages
            self.publisher_imu_fused.publish(imu_msg)
            self.publisher_temperature.publish(temperature_msg)
            self.publisher_magfield.publish(magfield_msg)
            self.publisher_orientation_euler.publish(orientation_euler_msg)

            # sleep
            time.sleep(1. / self.probe_freq)

def main(args=None):
    rclpy.init(args=args)

    imu_bno055_node = ImuBNO055Node()

    rclpy.spin(imu_bno055_node)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    imu_bno055_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()