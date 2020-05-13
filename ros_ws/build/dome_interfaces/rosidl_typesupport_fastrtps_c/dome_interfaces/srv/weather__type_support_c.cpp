// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from dome_interfaces:srv/Weather.idl
// generated code does not contain a copyright notice
#include "dome_interfaces/srv/weather__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "dome_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "dome_interfaces/srv/weather__struct.h"
#include "dome_interfaces/srv/weather__functions.h"
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

#include "rosidl_generator_c/string.h"  // weather_action
#include "rosidl_generator_c/string_functions.h"  // weather_action

// forward declare type support functions


using _Weather_Request__ros_msg_type = dome_interfaces__srv__Weather_Request;

static bool _Weather_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Weather_Request__ros_msg_type * ros_message = static_cast<const _Weather_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: weather_action
  {
    const rosidl_generator_c__String * str = &ros_message->weather_action;
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

static bool _Weather_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Weather_Request__ros_msg_type * ros_message = static_cast<_Weather_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: weather_action
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->weather_action.data) {
      rosidl_generator_c__String__init(&ros_message->weather_action);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->weather_action,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'weather_action'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dome_interfaces
size_t get_serialized_size_dome_interfaces__srv__Weather_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Weather_Request__ros_msg_type * ros_message = static_cast<const _Weather_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name weather_action
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->weather_action.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _Weather_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dome_interfaces__srv__Weather_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dome_interfaces
size_t max_serialized_size_dome_interfaces__srv__Weather_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: weather_action
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

static size_t _Weather_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_dome_interfaces__srv__Weather_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Weather_Request = {
  "dome_interfaces::srv",
  "Weather_Request",
  _Weather_Request__cdr_serialize,
  _Weather_Request__cdr_deserialize,
  _Weather_Request__get_serialized_size,
  _Weather_Request__max_serialized_size
};

static rosidl_message_type_support_t _Weather_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Weather_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dome_interfaces, srv, Weather_Request)() {
  return &_Weather_Request__type_support;
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
// #include "dome_interfaces/srv/weather__struct.h"
// already included above
// #include "dome_interfaces/srv/weather__functions.h"
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
// #include "rosidl_generator_c/string.h"  // data_response
// already included above
// #include "rosidl_generator_c/string_functions.h"  // data_response

// forward declare type support functions


using _Weather_Response__ros_msg_type = dome_interfaces__srv__Weather_Response;

static bool _Weather_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Weather_Response__ros_msg_type * ros_message = static_cast<const _Weather_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: data_response
  {
    size_t size = 10;
    auto array_ptr = ros_message->data_response;
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

static bool _Weather_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Weather_Response__ros_msg_type * ros_message = static_cast<_Weather_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: data_response
  {
    size_t size = 10;
    auto array_ptr = ros_message->data_response;
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
        fprintf(stderr, "failed to assign string into field 'data_response'\n");
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dome_interfaces
size_t get_serialized_size_dome_interfaces__srv__Weather_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Weather_Response__ros_msg_type * ros_message = static_cast<const _Weather_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name data_response
  {
    size_t array_size = 10;
    auto array_ptr = ros_message->data_response;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Weather_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dome_interfaces__srv__Weather_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dome_interfaces
size_t max_serialized_size_dome_interfaces__srv__Weather_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: data_response
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

static size_t _Weather_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_dome_interfaces__srv__Weather_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Weather_Response = {
  "dome_interfaces::srv",
  "Weather_Response",
  _Weather_Response__cdr_serialize,
  _Weather_Response__cdr_deserialize,
  _Weather_Response__get_serialized_size,
  _Weather_Response__max_serialized_size
};

static rosidl_message_type_support_t _Weather_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Weather_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dome_interfaces, srv, Weather_Response)() {
  return &_Weather_Response__type_support;
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
#include "dome_interfaces/srv/weather.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Weather__callbacks = {
  "dome_interfaces::srv",
  "Weather",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dome_interfaces, srv, Weather_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dome_interfaces, srv, Weather_Response)(),
};

static rosidl_service_type_support_t Weather__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Weather__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dome_interfaces, srv, Weather)() {
  return &Weather__handle;
}

#if defined(__cplusplus)
}
#endif
