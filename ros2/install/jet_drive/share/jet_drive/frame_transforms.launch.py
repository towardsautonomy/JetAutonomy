from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()
    laser_frame_transforms = Node(
        node_name="static_transform_publisher",
        package="tf2_ros",
        node_executable="static_transform_publisher",
        arguments=['0.0', '0.0', '0.0', '0.0', '0.0', '0.0', 'world', 'laser'],
    )
    camera_frame_transforms = Node(
        node_name="static_transform_publisher",
        package="tf2_ros",
        node_executable="static_transform_publisher",
        arguments=['0.0', '0.0', '0.0', '0.0', '0.0', '0.0', 'world', 'camera_frame'],
    )
    ld.add_action(laser_frame_transforms)
    ld.add_action(camera_frame_transforms)
    return ld