from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()
    joystick_node = Node(
        node_name="joystick_node",
        package="joystick",
        node_executable="joystick_node",
        output="screen",
    )
    ld.add_action(joystick_node)
    return ld