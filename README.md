# ROS2 OBSERVATORY


![](/docs/img/dome.png)

# Table of Contents
  * [Description](#description)
  * [Hardware](#hardware)
    * [Components](#components)
  * [Software architecutre](#software_architecutre)
    * [ROS2 node structure](#ros2_node_structure)
    * [Class diagrams](#class_diagrams)
  * [Requirements](#requirements)
  * [Installation](#installation)
    * [Libraries](#libraries)
  * [How to use](#how-to-use)
    * [Dome service](#dome-service)
    * [Telescope service](#telescope-service)
    * [Camera service](#camera-service)
    * [Weather service](#weather-service)
  * [Author](#author)
  
# Description 

<p align="center">
  <img src="/docs/img/domegif.gif" />
</p>

A ROS2 system for controlling a miniaturized [Baader Allsky dome][baaderdome] replica. The replica emulates the behaviour of the dome within an observatory. It includes a telescope, a camera and a weather station.  
The ROS2 system is based on a [service - client][servcli] node structure.

The telescope mount is an [Altazimuth mount][altaz]. It rotates to the desired position given the altitude and azimuth in degrees.

The camera service can take images and analyze them using the [Astromtetry][astrometry] API.  
The weather service uses an external API as well, [Open Weather][openweathermap]. With the latitude - longitude coordinates it retrieves the weather in the area. This simulates a weather station in the observatory environment.

[baaderdome]: https://www.baader-planetarium.com/en/domes/baader-allsky-domes-(2.3---6.5-meter).html
[servcli]: https://index.ros.org/doc/ros2/Tutorials/Services/Understanding-ROS2-Services/
[altaz]: https://en.wikipedia.org/wiki/Altazimuth_mount
[astrometry]: https://nova.astrometry.net/
[openweathermap]: https://openweathermap.org/api

# Hardware
![](/docs/img/hardware.png)

## Components

+ Raspberry PI 3B +
+ 5x Continuous rotation servos
+ 1x 0-180 Servo (usage from 0-90)
+ 1x LSM303
+ 1x I2C-PCA9685
+ 1x 3,3v & 5v PSU
+ 8x Reed switches
+ 8x 2.2k resistors
+ 8x Mini neodymium magnets

*Note that most of the components were reused, to do a proper prototype other components should be used.*

# Software architecutre

## ROS2 node structure
![](/docs/img/ros_sys.png)

## Class diagrams
![](/docs/img/class_diagram.png)

# Requirements
The system was developed using the following:

- Python 3.6.9
- Ubuntu core 18.04 aarch64
- ROS 2 Dashing Diademata

# Installation

1. Install ROS 2 Dashing Diademata *(Debian packages)*: https://index.ros.org/doc/ros2/Installation/Dashing/
2. Install Colcon: https://index.ros.org/doc/ros2/Tutorials/Colcon-Tutorial/
3. Remember to add the following to the ~/.bashrc file:
    * source /opt/ros/dashing/setup.bash
    * source {PATH}/ROS-observatory/ros_ws/install/setup.bash

```bash
echo "source /opt/ros/dashing/setup.bash" >> ~/.bashrc
echo "source /home/ubuntu/ROS-observatory/ros_ws/install/setup.bash" >> ~/.bashrc
```
4. Install pip3:

```bash
sudo apt-get install python3-pip
```
5. Enable the use of I2C of the raspberry pi:

```bash
sudo apt-get install -y python-smbus
sudo apt-get install -y i2c-tools
pip3 install adafruit-blinka
```

*More information [here][i2crpi].*

[i2crpi]: https://learn.adafruit.com/circuitpython-on-raspberrypi-linux/installing-circuitpython-on-raspberry-pi


6. Give user permissions to access `i2c` and `gpio` without being root.

## Libraries
The system uses the following libraries:

|  |  |
|-------|-----------|
| adafruit_servokit | `pip3 install adafruit-circuitpython-servokit` |
| RPi.GPIO          | `pip3 install RPi.GPIO`|
| adafruit_lsm303dlh_mag | `pip3 install adafruit-circuitpython-lsm303dlh-mag`
| request | `pip3 install request`
| json    | `pip3 install json`


# How to use

First of all we need to launch the services. This can be done in two ways:
1. Executing each service by its own: `ros2 run package_name service `
2. Execute all services altogether:   `ros2 launch launch.py`

Once the services are up, all we need to do is send a request through a client node. This is done executing a command with the desired parameters:

```sh
ros2 run package_name client params
```

## Dome service
The dome service can perform the following actions:

|  |  |
|-------|-----------|
| status   | `ros2 run dome_servcli client status` |
| open     | `ros2 run dome_servcli client open` |
| close    | `ros2 run dome_servcli client close` |


## Telescope service
The telescope service can perform the following actions:
|  |  |
|-------|-----------|
| goto altitude azimuth  | `ros2 run telescope_servcli client goto 50 248` |


## Camera service
The camera service can perform the following actions:
|  |  |
|-------|-----------|
|  take_image              | `ros2 run camera_servcli client take_image` |
|  analyze_image file_name |`ros2 run camera_servcli client analyze_image file_name`|


With the command above, the camera analyzes the image through a web service ([Astrometry.net][astrometry]) and returns the image with the tags.

Raw Image             |  Analyzed Image
:-------------------------:|:-------------------------:
![](/docs/img/raw.png)  |  ![](/docs/img/analyzed.jpeg)

![](/docs/img/tags.png)

[astrometry]: https://nova.astrometry.net/

## Weather service
The weather service can perform the following actions:
|  |  |
|-------|-----------|
|  info | `ros2 run weather_servcli info` |

It returns the weather information regarding the cooridnates *(Latitude & Longitude)* of your area using the [openweathermap.org][openweather] service.

[openweather]: https://openweathermap.org

# Author
[Francesc Domene](https://github.com/fdomf/)
