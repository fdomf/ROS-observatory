from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='dome_servcli',
            node_executable='service',
            node_name='dome_service'
        ),
        Node(
            package='telescope_servcli',
            node_executable='service',
            node_name='telescope_service'
        ),
        Node(
            package='camera_servcli',
            node_executable='service',
            node_name='camera_service'
        ),
        Node(
            package='weather_servcli',
            node_executable='service',
            node_name='weather_service',
        )
    ])