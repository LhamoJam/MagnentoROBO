from setuptools import setup

package_name = 'imu_usb_pkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='14579',
    maintainer_email='wf3597181@163.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "imu_pub_node = imu_usb_pkg.imu_pub:main",
            "imu_sub_node = imu_usb_pkg.imu_sub:main",
        ],
    },
)
