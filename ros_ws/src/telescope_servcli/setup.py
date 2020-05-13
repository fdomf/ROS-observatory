from setuptools import setup

package_name = 'telescope_servcli'

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
    maintainer='francesc',
    maintainer_email='fdomenef@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'service = telescope_servcli.telescope_service:main',
            'client = telescope_servcli.telescope_client:main',
        ],
    },
)
