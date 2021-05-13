#!/usr/bin/python3

import rclpy
from rclpy.node import Node
from jetpilot_msgs.msg import JetDriveCmd
from jetracer.nvidia_racecar import NvidiaRacecar

class JetDriveNode(Node):

    def __init__(self):
        super().__init__('jet_drive_node')

        # declare configurable parameters
        self.declare_parameter('steering_gain', 0.5)
        self.declare_parameter('steering_offset', 0.0)
        self.declare_parameter('throttle_gain', 0.5)
        self.declare_parameter('throttle_offset', 0.0)

        # Get the parameters
        self.steering_gain = float(self.get_parameter('steering_gain').value)
        self.steering_offset = float(self.get_parameter('steering_offset').value)

        self.throttle_gain = float(self.get_parameter('throttle_gain').value)
        self.throttle_offset = float(self.get_parameter('throttle_offset').value)

        # initialize car
        self.car = NvidiaRacecar()
        self.car.steering_gain = self.steering_gain
        self.car.steering_offset = self.steering_offset
        self.car.throttle_gain = self.throttle_gain
        self.car.throttle_offset = self.throttle_offset
        self.get_logger().info('Jet Racer Initialized')

        # subscribe to jet_drive_cmd message
        self.subscription = self.create_subscription(
            JetDriveCmd,
            '/jet_drive/cmd',
            self.jet_drive_cmd_cb,
            10)
        self.subscription  # prevent unused variable warning

    def jet_drive_cmd_cb(self, cmd):
        self.car.steering = cmd.steering
        self.car.throttle = cmd.throttle
        self.get_logger().info('Steering: {} | Throttle: {}'.format(cmd.steering, cmd.throttle))

def main(args=None):
    rclpy.init(args=args)

    jet_drive_node = JetDriveNode()

    rclpy.spin(jet_drive_node)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    jet_drive_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()