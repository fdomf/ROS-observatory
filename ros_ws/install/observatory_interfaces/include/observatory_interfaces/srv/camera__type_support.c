// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from observatory_interfaces:srv/Camera.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "observatory_interfaces/srv/camera__rosidl_typesupport_introspection_c.h"
#include "observatory_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "observatory_interfaces/srv/camera__struct.h"


// Include directives for member types
// Member `camera_action`
// Member `file_name`
#include "rosidl_generator_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember Camera_Request__rosidl_typesupport_introspection_c__Camera_Request_message_member_array[2] = {
  {
    "camera_action",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(observatory_interfaces__srv__Camera_Request, camera_action),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "file_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(observatory_interfaces__srv__Camera_Request, file_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Camera_Request__rosidl_typesupport_introspection_c__Camera_Request_message_members = {
  "observatory_interfaces__srv",  // message namespace
  "Camera_Request",  // message name
  2,  // number of fields
  sizeof(observatory_interfaces__srv__Camera_Request),
  Camera_Request__rosidl_typesupport_introspection_c__Camera_Request_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Camera_Request__rosidl_typesupport_introspection_c__Camera_Request_message_type_support_handle = {
  0,
  &Camera_Request__rosidl_typesupport_introspection_c__Camera_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_observatory_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, observatory_interfaces, srv, Camera_Request)() {
  if (!Camera_Request__rosidl_typesupport_introspection_c__Camera_Request_message_type_support_handle.typesupport_identifier) {
    Camera_Request__rosidl_typesupport_introspection_c__Camera_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Camera_Request__rosidl_typesupport_introspection_c__Camera_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "observatory_interfaces/srv/camera__rosidl_typesupport_introspection_c.h"
// already included above
// #include "observatory_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "observatory_interfaces/srv/camera__struct.h"


// Include directives for member types
// Member `camera_response`
// Member `image_tags`
// Member `image_objects`
// already included above
// #include "rosidl_generator_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember Camera_Response__rosidl_typesupport_introspection_c__Camera_Response_message_member_array[3] = {
  {
    "camera_response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(observatory_interfaces__srv__Camera_Response, camera_response),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "image_tags",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(observatory_interfaces__srv__Camera_Response, image_tags),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "image_objects",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(observatory_interfaces__srv__Camera_Response, image_objects),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Camera_Response__rosidl_typesupport_introspection_c__Camera_Response_message_members = {
  "observatory_interfaces__srv",  // message namespace
  "Camera_Response",  // message name
  3,  // number of fields
  sizeof(observatory_interfaces__srv__Camera_Response),
  Camera_Response__rosidl_typesupport_introspection_c__Camera_Response_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Camera_Response__rosidl_typesupport_introspection_c__Camera_Response_message_type_support_handle = {
  0,
  &Camera_Response__rosidl_typesupport_introspection_c__Camera_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_observatory_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, observatory_interfaces, srv, Camera_Response)() {
  if (!Camera_Response__rosidl_typesupport_introspection_c__Camera_Response_message_type_support_handle.typesupport_identifier) {
    Camera_Response__rosidl_typesupport_introspection_c__Camera_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Camera_Response__rosidl_typesupport_introspection_c__Camera_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "observatory_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "observatory_interfaces/srv/camera__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers observatory_interfaces__srv__camera__rosidl_typesupport_introspection_c__Camera_service_members = {
  "observatory_interfaces__srv",  // service namespace
  "Camera",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // observatory_interfaces__srv__camera__rosidl_typesupport_introspection_c__Camera_Request_message_type_support_handle,
  NULL  // response message
  // observatory_interfaces__srv__camera__rosidl_typesupport_introspection_c__Camera_Response_message_type_support_handle
};

static rosidl_service_type_support_t observatory_interfaces__srv__camera__rosidl_typesupport_introspection_c__Camera_service_type_support_handle = {
  0,
  &observatory_interfaces__srv__camera__rosidl_typesupport_introspection_c__Camera_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, observatory_interfaces, srv, Camera_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, observatory_interfaces, srv, Camera_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_observatory_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, observatory_interfaces, srv, Camera)() {
  if (!observatory_interfaces__srv__camera__rosidl_typesupport_introspection_c__Camera_service_type_support_handle.typesupport_identifier) {
    observatory_interfaces__srv__camera__rosidl_typesupport_introspection_c__Camera_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)observatory_interfaces__srv__camera__rosidl_typesupport_introspection_c__Camera_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, observatory_interfaces, srv, Camera_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, observatory_interfaces, srv, Camera_Response)()->data;
  }

  return &observatory_interfaces__srv__camera__rosidl_typesupport_introspection_c__Camera_service_type_support_handle;
}
