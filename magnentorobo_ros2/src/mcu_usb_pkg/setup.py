import os
from glob import glob
from setuptools import setup

package_name = 'mcu_usb_pkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name), glob('launch/*.launch.py'))
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='artscript',
    maintainer_email='wf3597181@163.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "mcu_pub_node = mcu_usb_pkg.mcu_pub:main",
            "mcu_sub_node = mcu_usb_pkg.mcu_sub:main",
        ],
    },
)
