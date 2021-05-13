from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()
    front_cam_node = Node(
        node_name="front_cam_node",
        package="front_cam",
        node_executable="front_cam_node",
        output="screen",
        parameters=[
          {"width": 1280},
          {"height": 720},
          {"frame_rate": 30},
          {"device_id": 0}
        ]
    )
    ld.add_action(front_cam_node)
    return ld