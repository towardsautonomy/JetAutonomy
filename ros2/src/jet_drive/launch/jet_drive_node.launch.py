from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()
    jet_drive_node = Node(
        node_name="jet_drive_node",
        package="jet_drive",
        node_executable="jet_drive_node",
        output="screen",
        parameters=[
          {"steering_gain": 0.5},
          {"steering_offset": 0.0},
          {"throttle_gain": 0.5},
          {"throttle_offset": 0.0}
        ]
    )
    ld.add_action(jet_drive_node)
    return ld