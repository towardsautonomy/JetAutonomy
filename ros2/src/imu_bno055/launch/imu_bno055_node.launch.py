from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()
    imu_bno055_node = Node(
        node_name="imu_bno055_node",
        package="imu_bno055",
        node_executable="imu_bno055_node",
        output="screen",
        parameters=[
          {"i2c_bus_id": 0},
          {"probe_freq": 100.0} # Hz
        ]
    )
    ld.add_action(imu_bno055_node)
    return ld