import launch
import launch.actions
import launch.substitutions
import launch_ros.actions
from launch import LaunchDescription, launch_description
from launch_ros.actions import Node

from launch.substitutions import LaunchConfiguration, PythonExpression
from launch.actions import DeclareLaunchArgument

def generate_launch_description():
    return launch.LaunchDescription([
        launch.actions.DeclareLaunchArgument(
            'node_prefix',
            default_value=[
                launch.substitutions.EnvironmentVariable('USER'), '_'],
            description='Prefix for node names'),
        launch_ros.actions.Node(
            package='mcu_usb_pkg', executable='mcu_pub_node', output='screen',
            name=[launch.substitutions.LaunchConfiguration('node_prefix'), 'mcu_pub_node'],
            parameters=[
            {"mcu_pub_port": '/dev/ttyUSB1'}, 
            {"mcu_pub_baud": 9600}, 
            ]
        ),
        launch_ros.actions.Node(
            package='imu_usb_pkg', executable='imu_pub_node', output='screen',
            name=[launch.substitutions.LaunchConfiguration('node_prefix'), 'imu_pub_node'],
            parameters=[
            {"imu_pub_port": '/dev/ttyUSB0'}, 
            {"imu_pub_baud": 9600}, 
            ]
        ),
        launch_ros.actions.Node(
            package='magnento_serial_pkg', executable='magnento_service', output='screen',
            name=[launch.substitutions.LaunchConfiguration('node_prefix'), 'magnento_service_node'],
            parameters=[
            {"imu_pub_port": '/dev/ttyUSB0'}, 
            {"imu_pub_baud": 9600}, 
            ]
        ),
        launch_ros.actions.Node(
            package='servo_pwm_pkg', executable='servo_service', output='screen',
            name=[launch.substitutions.LaunchConfiguration('node_prefix'), 'servo_service_node']
        ),
        launch_ros.actions.Node(
            package='camera_usb_pkg', executable='camera_pub_node', output='screen',
            name=[launch.substitutions.LaunchConfiguration('node_prefix'), 'camera_pub_node'],
            parameters=[
            {"camera_num": 0},
            ]
        ),
        launch_ros.actions.Node(
            package='camera_usb_pkg', executable='camera_sub_node', output='screen',
            name=[launch.substitutions.LaunchConfiguration('node_prefix'), 'camera_sub_node']
        ),
    ])
