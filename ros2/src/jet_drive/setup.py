import os
from setuptools import setup
from glob import glob

package_name = 'jet_drive'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name), glob('launch/*.launch.py')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Shubham Shrivastava',
    maintainer_email='shubham@TowardsAutonomy.com',
    description='Jet Drive package',
    license='MIT',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            '{}_node = {}.{}_node:main'.format(package_name, package_name, package_name),
        ],
    },
)
