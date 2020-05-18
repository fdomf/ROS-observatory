// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from observatory_interfaces:srv/Telescope.idl
// generated code does not contain a copyright notice

#ifndef OBSERVATORY_INTERFACES__SRV__TELESCOPE__TRAITS_HPP_
#define OBSERVATORY_INTERFACES__SRV__TELESCOPE__TRAITS_HPP_

#include "observatory_interfaces/srv/telescope__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<observatory_interfaces::srv::Telescope_Request>()
{
  return "observatory_interfaces::srv::Telescope_Request";
}

template<>
struct has_fixed_size<observatory_interfaces::srv::Telescope_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<observatory_interfaces::srv::Telescope_Request>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<observatory_interfaces::srv::Telescope_Response>()
{
  return "observatory_interfaces::srv::Telescope_Response";
}

template<>
struct has_fixed_size<observatory_interfaces::srv::Telescope_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<observatory_interfaces::srv::Telescope_Response>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<observatory_interfaces::srv::Telescope>()
{
  return "observatory_interfaces::srv::Telescope";
}

template<>
struct has_fixed_size<observatory_interfaces::srv::Telescope>
  : std::integral_constant<
    bool,
    has_fixed_size<observatory_interfaces::srv::Telescope_Request>::value &&
    has_fixed_size<observatory_interfaces::srv::Telescope_Response>::value
  >
{
};

template<>
struct has_bounded_size<observatory_interfaces::srv::Telescope>
  : std::integral_constant<
    bool,
    has_bounded_size<observatory_interfaces::srv::Telescope_Request>::value &&
    has_bounded_size<observatory_interfaces::srv::Telescope_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // OBSERVATORY_INTERFACES__SRV__TELESCOPE__TRAITS_HPP_
