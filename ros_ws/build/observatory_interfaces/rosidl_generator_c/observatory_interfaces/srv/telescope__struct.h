// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from observatory_interfaces:srv/Telescope.idl
// generated code does not contain a copyright notice

#ifndef OBSERVATORY_INTERFACES__SRV__TELESCOPE__STRUCT_H_
#define OBSERVATORY_INTERFACES__SRV__TELESCOPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'telescope_action'
#include "rosidl_generator_c/string.h"

// Struct defined in srv/Telescope in the package observatory_interfaces.
typedef struct observatory_interfaces__srv__Telescope_Request
{
  rosidl_generator_c__String telescope_action;
  double alt;
  double az;
} observatory_interfaces__srv__Telescope_Request;

// Struct for a sequence of observatory_interfaces__srv__Telescope_Request.
typedef struct observatory_interfaces__srv__Telescope_Request__Sequence
{
  observatory_interfaces__srv__Telescope_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} observatory_interfaces__srv__Telescope_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'telescope_response'
// already included above
// #include "rosidl_generator_c/string.h"

// Struct defined in srv/Telescope in the package observatory_interfaces.
typedef struct observatory_interfaces__srv__Telescope_Response
{
  rosidl_generator_c__String telescope_response;
} observatory_interfaces__srv__Telescope_Response;

// Struct for a sequence of observatory_interfaces__srv__Telescope_Response.
typedef struct observatory_interfaces__srv__Telescope_Response__Sequence
{
  observatory_interfaces__srv__Telescope_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} observatory_interfaces__srv__Telescope_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OBSERVATORY_INTERFACES__SRV__TELESCOPE__STRUCT_H_
