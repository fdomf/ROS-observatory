// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from dome_interfaces:msg/Sensor.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "dome_interfaces/msg/sensor__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace dome_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

size_t size_function__Sensor__sensor_status(const void * untyped_member)
{
  (void)untyped_member;
  return 8;
}

const void * get_const_function__Sensor__sensor_status(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<std::string, 8> *>(untyped_member);
  return &member[index];
}

void * get_function__Sensor__sensor_status(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<std::string, 8> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Sensor_message_member_array[1] = {
  {
    "sensor_status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(dome_interfaces::msg::Sensor, sensor_status),  // bytes offset in struct
    nullptr,  // default value
    size_function__Sensor__sensor_status,  // size() function pointer
    get_const_function__Sensor__sensor_status,  // get_const(index) function pointer
    get_function__Sensor__sensor_status,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Sensor_message_members = {
  "dome_interfaces::msg",  // message namespace
  "Sensor",  // message name
  1,  // number of fields
  sizeof(dome_interfaces::msg::Sensor),
  Sensor_message_member_array  // message members
};

static const rosidl_message_type_support_t Sensor_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Sensor_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace dome_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dome_interfaces::msg::Sensor>()
{
  return &::dome_interfaces::msg::rosidl_typesupport_introspection_cpp::Sensor_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dome_interfaces, msg, Sensor)() {
  return &::dome_interfaces::msg::rosidl_typesupport_introspection_cpp::Sensor_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
