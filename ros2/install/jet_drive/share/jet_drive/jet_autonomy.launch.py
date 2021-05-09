from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()

    # joystick node
    joystick_node = Node(
        node_name="joystick_node",
        package="joystick",
        node_executable="joystick_node",
        output="screen",
    )

    # JetDrive moderator node
    jet_drive_moderator_node = Node(
        node_name="jet_drive_moderator_node",
        package="jet_drive_moderator",
        node_executable="jet_drive_moderator_node",
        output="screen",
    )

    # front camera node
    front_cam_node = Node(
        node_name="front_cam_node",
        package="front_cam",
        node_executable="front_cam_node",
        parameters=[
          {"width": 224},
          {"height": 224},
          {"frame_rate": 120},
          {"device_id": 0}
        ]
    )

    # RPLIDAR node
    rplidar_node = Node(
        node_name='rplidar_composition',
        package='rplidar_ros',
        node_executable='rplidar_composition',
        output='screen',
        parameters=[{
            'serial_port': '/dev/ttyUSB0',
            'serial_baudrate': 115200,  # A1 / A2
            # 'serial_baudrate': 256000, # A3
            'frame_id': 'laser',
            'inverted': False,
            'angle_compensate': True,
        }],
    )

    # JetDrive node
    jet_drive_node = Node(
        node_name="jet_drive_node",
        package="jet_drive",
        node_executable="jet_drive_node",
        output="screen",
        parameters=[
          {"steering_gain": 0.5},
          {"steering_offset": 0.0},
          {"throttle_gain": 0.5},
          {"throttle_offset": 0.0},
        ]
    )
    
    # coordinate transforms 
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

    # launch nodes
    ld.add_action(joystick_node)
    ld.add_action(jet_drive_moderator_node)
    ld.add_action(front_cam_node)
    ld.add_action(rplidar_node)
    ld.add_action(jet_drive_node)
    ld.add_action(laser_frame_transforms)
    ld.add_action(camera_frame_transforms)

    return ld