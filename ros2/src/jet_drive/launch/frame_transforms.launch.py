from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()
    limu_link_transforms = Node(
        node_name="static_transform_publisher",
        package="tf2_ros",
        node_executable="static_transform_publisher",
        arguments=['0.0', '0.0', '0.0', '0.0', '0.0', '0.0', 'base_link', 'imu_link'],
    )
    laser_link_transforms = Node(
        node_name="static_transform_publisher",
        package="tf2_ros",
        node_executable="static_transform_publisher",
        arguments=['0.0', '0.0', '0.1', '0.0', '0.0', '0.0', 'base_link', 'laser_link'],
    )
    laser_frame_transforms = Node(
        node_name="static_transform_publisher",
        package="tf2_ros",
        node_executable="static_transform_publisher",
        arguments=['0.0', '0.0', '0.0', '0.0', '0.0', '0.0', 'laser_frame', 'laser_link'],
    )
    camera_link_transforms = Node(
        node_name="static_transform_publisher",
        package="tf2_ros",
        node_executable="static_transform_publisher",
        arguments=['0.2', '0.0', '0.0', '0.0', '0.0', '0.0', 'base_link', 'camera_link'],
    )
    ld.add_action(imu_link_transforms)
    ld.add_action(laser_link_transforms)
    ld.add_action(laser_frame_transforms)
    ld.add_action(camera_link_transforms)
    return ld