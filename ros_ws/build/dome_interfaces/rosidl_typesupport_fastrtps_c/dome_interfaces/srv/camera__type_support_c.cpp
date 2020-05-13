// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from dome_interfaces:srv/Camera.idl
// generated code does not contain a copyright notice
#include "dome_interfaces/srv/camera__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "dome_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "dome_interfaces/srv/camera__struct.h"
#include "dome_interfaces/srv/camera__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_generator_c/string.h"  // camera_action
#include "rosidl_generator_c/string_functions.h"  // camera_action

// forward declare type support functions


using _Camera_Request__ros_msg_type = dome_interfaces__srv__Camera_Request;

static bool _Camera_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Camera_Request__ros_msg_type * ros_message = static_cast<const _Camera_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: camera_action
  {
    const rosidl_generator_c__String * str = &ros_message->camera_action;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _Camera_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Camera_Request__ros_msg_type * ros_message = static_cast<_Camera_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: camera_action
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->camera_action.data) {
      rosidl_generator_c__String__init(&ros_message->camera_action);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->camera_action,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'camera_action'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dome_interfaces
size_t get_serialized_size_dome_interfaces__srv__Camera_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Camera_Request__ros_msg_type * ros_message = static_cast<const _Camera_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name camera_action
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->camera_action.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _Camera_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dome_interfaces__srv__Camera_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dome_interfaces
size_t max_serialized_size_dome_interfaces__srv__Camera_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: camera_action
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Camera_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_dome_interfaces__srv__Camera_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Camera_Request = {
  "dome_interfaces::srv",
  "Camera_Request",
  _Camera_Request__cdr_serialize,
  _Camera_Request__cdr_deserialize,
  _Camera_Request__get_serialized_size,
  _Camera_Request__max_serialized_size
};

static rosidl_message_type_support_t _Camera_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Camera_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dome_interfaces, srv, Camera_Request)() {
  return &_Camera_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "dome_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "dome_interfaces/srv/camera__struct.h"
// already included above
// #include "dome_interfaces/srv/camera__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "rosidl_generator_c/string.h"  // camera_response
// already included above
// #include "rosidl_generator_c/string_functions.h"  // camera_response

// forward declare type support functions


using _Camera_Response__ros_msg_type = dome_interfaces__srv__Camera_Response;

static bool _Camera_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Camera_Response__ros_msg_type * ros_message = static_cast<const _Camera_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: camera_response
  {
    size_t size = 10;
    auto array_ptr = ros_message->camera_response;
    for (size_t i = 0; i < size; ++i) {
      const rosidl_generator_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  return true;
}

static bool _Camera_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Camera_Response__ros_msg_type * ros_message = static_cast<_Camera_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: camera_response
  {
    size_t size = 10;
    auto array_ptr = ros_message->camera_response;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_generator_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_generator_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'camera_response'\n");
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dome_interfaces
size_t get_serialized_size_dome_interfaces__srv__Camera_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Camera_Response__ros_msg_type * ros_message = static_cast<const _Camera_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name camera_response
  {
    size_t array_size = 10;
    auto array_ptr = ros_message->camera_response;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Camera_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dome_interfaces__srv__Camera_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dome_interfaces
size_t max_serialized_size_dome_interfaces__srv__Camera_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: camera_response
  {
    size_t array_size = 10;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Camera_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_dome_interfaces__srv__Camera_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Camera_Response = {
  "dome_interfaces::srv",
  "Camera_Response",
  _Camera_Response__cdr_serialize,
  _Camera_Response__cdr_deserialize,
  _Camera_Response__get_serialized_size,
  _Camera_Response__max_serialized_size
};

static rosidl_message_type_support_t _Camera_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Camera_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dome_interfaces, srv, Camera_Response)() {
  return &_Camera_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "dome_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "dome_interfaces/srv/camera.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Camera__callbacks = {
  "dome_interfaces::srv",
  "Camera",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dome_interfaces, srv, Camera_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dome_interfaces, srv, Camera_Response)(),
};

static rosidl_service_type_support_t Camera__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Camera__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dome_interfaces, srv, Camera)() {
  return &Camera__handle;
}

#if defined(__cplusplus)
}
#endif
