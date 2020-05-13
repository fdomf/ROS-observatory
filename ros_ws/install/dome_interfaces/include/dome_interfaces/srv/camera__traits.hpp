// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dome_interfaces:srv/Camera.idl
// generated code does not contain a copyright notice

#ifndef DOME_INTERFACES__SRV__CAMERA__TRAITS_HPP_
#define DOME_INTERFACES__SRV__CAMERA__TRAITS_HPP_

#include "dome_interfaces/srv/camera__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dome_interfaces::srv::Camera_Request>()
{
  return "dome_interfaces::srv::Camera_Request";
}

template<>
struct has_fixed_size<dome_interfaces::srv::Camera_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dome_interfaces::srv::Camera_Request>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dome_interfaces::srv::Camera_Response>()
{
  return "dome_interfaces::srv::Camera_Response";
}

template<>
struct has_fixed_size<dome_interfaces::srv::Camera_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dome_interfaces::srv::Camera_Response>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dome_interfaces::srv::Camera>()
{
  return "dome_interfaces::srv::Camera";
}

template<>
struct has_fixed_size<dome_interfaces::srv::Camera>
  : std::integral_constant<
    bool,
    has_fixed_size<dome_interfaces::srv::Camera_Request>::value &&
    has_fixed_size<dome_interfaces::srv::Camera_Response>::value
  >
{
};

template<>
struct has_bounded_size<dome_interfaces::srv::Camera>
  : std::integral_constant<
    bool,
    has_bounded_size<dome_interfaces::srv::Camera_Request>::value &&
    has_bounded_size<dome_interfaces::srv::Camera_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // DOME_INTERFACES__SRV__CAMERA__TRAITS_HPP_
