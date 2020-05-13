// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dome_interfaces:msg/Action.idl
// generated code does not contain a copyright notice

#ifndef DOME_INTERFACES__MSG__ACTION__TRAITS_HPP_
#define DOME_INTERFACES__MSG__ACTION__TRAITS_HPP_

#include "dome_interfaces/msg/action__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dome_interfaces::msg::Action>()
{
  return "dome_interfaces::msg::Action";
}

template<>
struct has_fixed_size<dome_interfaces::msg::Action>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dome_interfaces::msg::Action>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

#endif  // DOME_INTERFACES__MSG__ACTION__TRAITS_HPP_
