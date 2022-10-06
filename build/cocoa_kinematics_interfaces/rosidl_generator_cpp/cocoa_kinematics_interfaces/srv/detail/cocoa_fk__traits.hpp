// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cocoa_kinematics_interfaces:srv/CocoaFK.idl
// generated code does not contain a copyright notice

#ifndef COCOA_KINEMATICS_INTERFACES__SRV__DETAIL__COCOA_FK__TRAITS_HPP_
#define COCOA_KINEMATICS_INTERFACES__SRV__DETAIL__COCOA_FK__TRAITS_HPP_

#include "cocoa_kinematics_interfaces/srv/detail/cocoa_fk__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'jointstate'
#include "sensor_msgs/msg/detail/joint_state__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cocoa_kinematics_interfaces::srv::CocoaFK_Request>()
{
  return "cocoa_kinematics_interfaces::srv::CocoaFK_Request";
}

template<>
inline const char * name<cocoa_kinematics_interfaces::srv::CocoaFK_Request>()
{
  return "cocoa_kinematics_interfaces/srv/CocoaFK_Request";
}

template<>
struct has_fixed_size<cocoa_kinematics_interfaces::srv::CocoaFK_Request>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::JointState>::value> {};

template<>
struct has_bounded_size<cocoa_kinematics_interfaces::srv::CocoaFK_Request>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::JointState>::value> {};

template<>
struct is_message<cocoa_kinematics_interfaces::srv::CocoaFK_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'positionendeffector'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cocoa_kinematics_interfaces::srv::CocoaFK_Response>()
{
  return "cocoa_kinematics_interfaces::srv::CocoaFK_Response";
}

template<>
inline const char * name<cocoa_kinematics_interfaces::srv::CocoaFK_Response>()
{
  return "cocoa_kinematics_interfaces/srv/CocoaFK_Response";
}

template<>
struct has_fixed_size<cocoa_kinematics_interfaces::srv::CocoaFK_Response>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<cocoa_kinematics_interfaces::srv::CocoaFK_Response>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<cocoa_kinematics_interfaces::srv::CocoaFK_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cocoa_kinematics_interfaces::srv::CocoaFK>()
{
  return "cocoa_kinematics_interfaces::srv::CocoaFK";
}

template<>
inline const char * name<cocoa_kinematics_interfaces::srv::CocoaFK>()
{
  return "cocoa_kinematics_interfaces/srv/CocoaFK";
}

template<>
struct has_fixed_size<cocoa_kinematics_interfaces::srv::CocoaFK>
  : std::integral_constant<
    bool,
    has_fixed_size<cocoa_kinematics_interfaces::srv::CocoaFK_Request>::value &&
    has_fixed_size<cocoa_kinematics_interfaces::srv::CocoaFK_Response>::value
  >
{
};

template<>
struct has_bounded_size<cocoa_kinematics_interfaces::srv::CocoaFK>
  : std::integral_constant<
    bool,
    has_bounded_size<cocoa_kinematics_interfaces::srv::CocoaFK_Request>::value &&
    has_bounded_size<cocoa_kinematics_interfaces::srv::CocoaFK_Response>::value
  >
{
};

template<>
struct is_service<cocoa_kinematics_interfaces::srv::CocoaFK>
  : std::true_type
{
};

template<>
struct is_service_request<cocoa_kinematics_interfaces::srv::CocoaFK_Request>
  : std::true_type
{
};

template<>
struct is_service_response<cocoa_kinematics_interfaces::srv::CocoaFK_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // COCOA_KINEMATICS_INTERFACES__SRV__DETAIL__COCOA_FK__TRAITS_HPP_