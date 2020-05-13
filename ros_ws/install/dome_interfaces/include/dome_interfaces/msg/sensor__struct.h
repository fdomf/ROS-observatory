// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dome_interfaces:msg/Sensor.idl
// generated code does not contain a copyright notice

#ifndef DOME_INTERFACES__MSG__SENSOR__STRUCT_H_
#define DOME_INTERFACES__MSG__SENSOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'sensor_status'
#include "rosidl_generator_c/string.h"

// Struct defined in msg/Sensor in the package dome_interfaces.
typedef struct dome_interfaces__msg__Sensor
{
  rosidl_generator_c__String sensor_status[8];
} dome_interfaces__msg__Sensor;

// Struct for a sequence of dome_interfaces__msg__Sensor.
typedef struct dome_interfaces__msg__Sensor__Sequence
{
  dome_interfaces__msg__Sensor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dome_interfaces__msg__Sensor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DOME_INTERFACES__MSG__SENSOR__STRUCT_H_
