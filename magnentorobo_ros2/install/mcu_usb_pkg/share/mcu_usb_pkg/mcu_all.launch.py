import launch
import launch.actions
import launch.substitutions
import launch_ros.actions


def generate_launch_description():
    return launch.LaunchDescription([
        launch.actions.DeclareLaunchArgument(
            'node_prefix',
            default_value=[launch.substitutions.EnvironmentVariable('USER'), '_'],
            description='Prefix for node names'),
        launch_ros.actions.Node(
            package='mcu_usb_pkg', executable='mcu_pub_node', output='screen',
            name=[launch.substitutions.LaunchConfiguration('node_prefix'), 'mcu_pub_node']),
        launch_ros.actions.Node(
            package='mcu_usb_pkg', executable='mcu_sub_node', output='screen',
            name=[launch.substitutions.LaunchConfiguration('node_prefix'), 'mcu_sub_node']),
    ])
