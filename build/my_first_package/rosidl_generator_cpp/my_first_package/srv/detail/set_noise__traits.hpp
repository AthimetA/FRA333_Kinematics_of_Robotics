// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_first_package:srv/SetNoise.idl
// generated code does not contain a copyright notice

#ifndef MY_FIRST_PACKAGE__SRV__DETAIL__SET_NOISE__TRAITS_HPP_
#define MY_FIRST_PACKAGE__SRV__DETAIL__SET_NOISE__TRAITS_HPP_

#include "my_first_package/srv/detail/set_noise__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_first_package::srv::SetNoise_Request>()
{
  return "my_first_package::srv::SetNoise_Request";
}

template<>
inline const char * name<my_first_package::srv::SetNoise_Request>()
{
  return "my_first_package/srv/SetNoise_Request";
}

template<>
struct has_fixed_size<my_first_package::srv::SetNoise_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_first_package::srv::SetNoise_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_first_package::srv::SetNoise_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_first_package::srv::SetNoise_Response>()
{
  return "my_first_package::srv::SetNoise_Response";
}

template<>
inline const char * name<my_first_package::srv::SetNoise_Response>()
{
  return "my_first_package/srv/SetNoise_Response";
}

template<>
struct has_fixed_size<my_first_package::srv::SetNoise_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_first_package::srv::SetNoise_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_first_package::srv::SetNoise_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_first_package::srv::SetNoise>()
{
  return "my_first_package::srv::SetNoise";
}

template<>
inline const char * name<my_first_package::srv::SetNoise>()
{
  return "my_first_package/srv/SetNoise";
}

template<>
struct has_fixed_size<my_first_package::srv::SetNoise>
  : std::integral_constant<
    bool,
    has_fixed_size<my_first_package::srv::SetNoise_Request>::value &&
    has_fixed_size<my_first_package::srv::SetNoise_Response>::value
  >
{
};

template<>
struct has_bounded_size<my_first_package::srv::SetNoise>
  : std::integral_constant<
    bool,
    has_bounded_size<my_first_package::srv::SetNoise_Request>::value &&
    has_bounded_size<my_first_package::srv::SetNoise_Response>::value
  >
{
};

template<>
struct is_service<my_first_package::srv::SetNoise>
  : std::true_type
{
};

template<>
struct is_service_request<my_first_package::srv::SetNoise_Request>
  : std::true_type
{
};

template<>
struct is_service_response<my_first_package::srv::SetNoise_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MY_FIRST_PACKAGE__SRV__DETAIL__SET_NOISE__TRAITS_HPP_
