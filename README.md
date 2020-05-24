# ROS2 OBSERVATORY
![image](https://drive.google.com/uc?export=view&id=1NBTWICdMcwk3eKZdHhn6nminjx49Ptxm)
# Table of Contents
  * [What is this?](#what-is-this)
  * [Hardware](#hardware)
    * [Description](#description)
    * [Parts](#parts)
  * [Requirements](#requirements)
  * [Installation](#installation)
  * [How to use](#how-to-use)
  * [Author](#author)
  
# What is this?

This is a system implemented in ROS2 for controlling a miniaturized [Baader Allsky dome][baaderdome] replica. The replica emulates the behaviour of the dome within an observatory. It includes a telescope, a camera and a weather station.  
The ROS2 system is based on a [service - client][servcli] node structure.


The telescope mount is an [Altazimuth mount][altaz], it rotates to the desired position given the altitude and azimuth in degrees using a magnetometer.

The camera service can take images and analyze them using the [Astromtetry][astrometry] API.  
The weather service uses an external API as well, [Open Weather][openweathermap]. With the latitude - longitude coordinates it retrieves the weather in the area. This simualtes a weather station in the observatory environment.

[baaderdome]: https://www.baader-planetarium.com/en/domes/baader-allsky-domes-(2.3---6.5-meter).html
[servcli]: https://index.ros.org/doc/ros2/Tutorials/Services/Understanding-ROS2-Services/
[altaz]: https://en.wikipedia.org/wiki/Altazimuth_mount
[astrometry]: https://nova.astrometry.net/
[openweathermap]: https://openweathermap.org/api

# Hardware
![image](https://drive.google.com/uc?export=view&id=1bYUG8yEjRu20-ClVU79otFHRpOV49OlV)
TODO
## Description

## Parts

# Requirements
TODO
- Python 3.7.x
- 

# Installation
TODO
The system is developed in a Raspberry Pi 3b+ with an Ubuntu Core 18.04 image.


https://index.ros.org/doc/ros2/Installation/
https://index.ros.org/doc/ros2/Tutorials/Colcon-Tutorial/


# How to use

TODO

# Author
- [Francesc Domene](https://github.com/fdomf/)
