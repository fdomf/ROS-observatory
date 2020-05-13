// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dome_interfaces:srv/Camera.idl
// generated code does not contain a copyright notice

#ifndef DOME_INTERFACES__SRV__CAMERA__STRUCT_H_
#define DOME_INTERFACES__SRV__CAMERA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'camera_action'
#include "rosidl_generator_c/string.h"

// Struct defined in srv/Camera in the package dome_interfaces.
typedef struct dome_interfaces__srv__Camera_Request
{
  rosidl_generator_c__String camera_action;
} dome_interfaces__srv__Camera_Request;

// Struct for a sequence of dome_interfaces__srv__Camera_Request.
typedef struct dome_interfaces__srv__Camera_Request__Sequence
{
  dome_interfaces__srv__Camera_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dome_interfaces__srv__Camera_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'camera_response'
// already included above
// #include "rosidl_generator_c/string.h"

// Struct defined in srv/Camera in the package dome_interfaces.
typedef struct dome_interfaces__srv__Camera_Response
{
  rosidl_generator_c__String camera_response[10];
} dome_interfaces__srv__Camera_Response;

// Struct for a sequence of dome_interfaces__srv__Camera_Response.
typedef struct dome_interfaces__srv__Camera_Response__Sequence
{
  dome_interfaces__srv__Camera_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dome_interfaces__srv__Camera_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DOME_INTERFACES__SRV__CAMERA__STRUCT_H_
