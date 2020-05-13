// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from dome_interfaces:msg/Sensor.idl
// generated code does not contain a copyright notice
#include "dome_interfaces/msg/sensor__rosidl_typesupport_fastrtps_cpp.hpp"
#include "dome_interfaces/msg/sensor__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace dome_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dome_interfaces
cdr_serialize(
  const dome_interfaces::msg::Sensor & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: sensor_status
  {
    cdr << ros_message.sensor_status;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dome_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  dome_interfaces::msg::Sensor & ros_message)
{
  // Member: sensor_status
  {
    cdr >> ros_message.sensor_status;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dome_interfaces
get_serialized_size(
  const dome_interfaces::msg::Sensor & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: sensor_status
  {
    size_t array_size = 8;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.sensor_status[index].size() + 1);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_dome_interfaces
max_serialized_size_Sensor(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: sensor_status
  {
    size_t array_size = 8;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _Sensor__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const dome_interfaces::msg::Sensor *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Sensor__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<dome_interfaces::msg::Sensor *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Sensor__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const dome_interfaces::msg::Sensor *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Sensor__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Sensor(full_bounded, 0);
}

static message_type_support_callbacks_t _Sensor__callbacks = {
  "dome_interfaces::msg",
  "Sensor",
  _Sensor__cdr_serialize,
  _Sensor__cdr_deserialize,
  _Sensor__get_serialized_size,
  _Sensor__max_serialized_size
};

static rosidl_message_type_support_t _Sensor__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Sensor__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace dome_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_dome_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<dome_interfaces::msg::Sensor>()
{
  return &dome_interfaces::msg::typesupport_fastrtps_cpp::_Sensor__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dome_interfaces, msg, Sensor)() {
  return &dome_interfaces::msg::typesupport_fastrtps_cpp::_Sensor__handle;
}

#ifdef __cplusplus
}
#endif
