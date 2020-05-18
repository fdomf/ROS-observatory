// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from observatory_interfaces:srv/Dome.idl
// generated code does not contain a copyright notice

#ifndef OBSERVATORY_INTERFACES__SRV__DOME__STRUCT_H_
#define OBSERVATORY_INTERFACES__SRV__DOME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'dome_action'
#include "rosidl_generator_c/string.h"

// Struct defined in srv/Dome in the package observatory_interfaces.
typedef struct observatory_interfaces__srv__Dome_Request
{
  rosidl_generator_c__String dome_action;
} observatory_interfaces__srv__Dome_Request;

// Struct for a sequence of observatory_interfaces__srv__Dome_Request.
typedef struct observatory_interfaces__srv__Dome_Request__Sequence
{
  observatory_interfaces__srv__Dome_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} observatory_interfaces__srv__Dome_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'dome_response'
// already included above
// #include "rosidl_generator_c/string.h"

// Struct defined in srv/Dome in the package observatory_interfaces.
typedef struct observatory_interfaces__srv__Dome_Response
{
  rosidl_generator_c__String dome_response;
} observatory_interfaces__srv__Dome_Response;

// Struct for a sequence of observatory_interfaces__srv__Dome_Response.
typedef struct observatory_interfaces__srv__Dome_Response__Sequence
{
  observatory_interfaces__srv__Dome_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} observatory_interfaces__srv__Dome_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OBSERVATORY_INTERFACES__SRV__DOME__STRUCT_H_
