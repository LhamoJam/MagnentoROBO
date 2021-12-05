from setuptools import setup

package_name = 'camera_usb_pkg'

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
            "camera_pub_node = camera_usb_pkg.camera_pub:main",
            "camera_sub_node = camera_usb_pkg.camera_sub:main",
        ],
    },
)
