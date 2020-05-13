// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dome_interfaces:srv/Weather.idl
// generated code does not contain a copyright notice

#ifndef DOME_INTERFACES__SRV__WEATHER__STRUCT_H_
#define DOME_INTERFACES__SRV__WEATHER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'weather_action'
#include "rosidl_generator_c/string.h"

// Struct defined in srv/Weather in the package dome_interfaces.
typedef struct dome_interfaces__srv__Weather_Request
{
  rosidl_generator_c__String weather_action;
} dome_interfaces__srv__Weather_Request;

// Struct for a sequence of dome_interfaces__srv__Weather_Request.
typedef struct dome_interfaces__srv__Weather_Request__Sequence
{
  dome_interfaces__srv__Weather_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dome_interfaces__srv__Weather_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'data_response'
// already included above
// #include "rosidl_generator_c/string.h"

// Struct defined in srv/Weather in the package dome_interfaces.
typedef struct dome_interfaces__srv__Weather_Response
{
  rosidl_generator_c__String data_response[10];
} dome_interfaces__srv__Weather_Response;

// Struct for a sequence of dome_interfaces__srv__Weather_Response.
typedef struct dome_interfaces__srv__Weather_Response__Sequence
{
  dome_interfaces__srv__Weather_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dome_interfaces__srv__Weather_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DOME_INTERFACES__SRV__WEATHER__STRUCT_H_
