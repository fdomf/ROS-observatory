// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from observatory_interfaces:srv/Camera.idl
// generated code does not contain a copyright notice

#ifndef OBSERVATORY_INTERFACES__SRV__CAMERA__STRUCT_H_
#define OBSERVATORY_INTERFACES__SRV__CAMERA__STRUCT_H_

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
// Member 'file_name'
#include "rosidl_generator_c/string.h"

// Struct defined in srv/Camera in the package observatory_interfaces.
typedef struct observatory_interfaces__srv__Camera_Request
{
  rosidl_generator_c__String camera_action;
  rosidl_generator_c__String file_name;
} observatory_interfaces__srv__Camera_Request;

// Struct for a sequence of observatory_interfaces__srv__Camera_Request.
typedef struct observatory_interfaces__srv__Camera_Request__Sequence
{
  observatory_interfaces__srv__Camera_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} observatory_interfaces__srv__Camera_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'camera_response'
// Member 'image_tags'
// Member 'image_objects'
// already included above
// #include "rosidl_generator_c/string.h"

// Struct defined in srv/Camera in the package observatory_interfaces.
typedef struct observatory_interfaces__srv__Camera_Response
{
  rosidl_generator_c__String camera_response;
  rosidl_generator_c__String image_tags;
  rosidl_generator_c__String image_objects;
} observatory_interfaces__srv__Camera_Response;

// Struct for a sequence of observatory_interfaces__srv__Camera_Response.
typedef struct observatory_interfaces__srv__Camera_Response__Sequence
{
  observatory_interfaces__srv__Camera_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} observatory_interfaces__srv__Camera_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OBSERVATORY_INTERFACES__SRV__CAMERA__STRUCT_H_
