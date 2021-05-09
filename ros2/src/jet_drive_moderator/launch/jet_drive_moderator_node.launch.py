from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()
    jet_drive_moderator_node = Node(
        node_name="jet_drive_moderator_node",
        package="jet_drive_moderator",
        node_executable="jet_drive_moderator_node",
        output="screen",
    )
    ld.add_action(jet_drive_moderator_node)
    return ld