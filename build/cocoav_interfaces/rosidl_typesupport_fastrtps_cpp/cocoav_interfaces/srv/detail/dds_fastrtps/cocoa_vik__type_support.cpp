// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from cocoav_interfaces:srv/CocoaVIK.idl
// generated code does not contain a copyright notice
#include "cocoav_interfaces/srv/detail/cocoa_vik__rosidl_typesupport_fastrtps_cpp.hpp"
#include "cocoav_interfaces/srv/detail/cocoa_vik__struct.hpp"

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
namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Point &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Point &);
size_t get_serialized_size(
  const geometry_msgs::msg::Point &,
  size_t current_alignment);
size_t
max_serialized_size_Point(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs


namespace cocoav_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cocoav_interfaces
cdr_serialize(
  const cocoav_interfaces::srv::CocoaVIK_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: position
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.position,
    cdr);
  // Member: r
  {
    cdr << ros_message.r;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cocoav_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  cocoav_interfaces::srv::CocoaVIK_Request & ros_message)
{
  // Member: position
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.position);

  // Member: r
  {
    cdr >> ros_message.r;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cocoav_interfaces
get_serialized_size(
  const cocoav_interfaces::srv::CocoaVIK_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: position

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.position, current_alignment);
  // Member: r
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.r[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cocoav_interfaces
max_serialized_size_CocoaVIK_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: position
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Point(
        full_bounded, current_alignment);
    }
  }

  // Member: r
  {
    size_t array_size = 2;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _CocoaVIK_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const cocoav_interfaces::srv::CocoaVIK_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CocoaVIK_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<cocoav_interfaces::srv::CocoaVIK_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CocoaVIK_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const cocoav_interfaces::srv::CocoaVIK_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CocoaVIK_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_CocoaVIK_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _CocoaVIK_Request__callbacks = {
  "cocoav_interfaces::srv",
  "CocoaVIK_Request",
  _CocoaVIK_Request__cdr_serialize,
  _CocoaVIK_Request__cdr_deserialize,
  _CocoaVIK_Request__get_serialized_size,
  _CocoaVIK_Request__max_serialized_size
};

static rosidl_message_type_support_t _CocoaVIK_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CocoaVIK_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace cocoav_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_cocoav_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<cocoav_interfaces::srv::CocoaVIK_Request>()
{
  return &cocoav_interfaces::srv::typesupport_fastrtps_cpp::_CocoaVIK_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cocoav_interfaces, srv, CocoaVIK_Request)() {
  return &cocoav_interfaces::srv::typesupport_fastrtps_cpp::_CocoaVIK_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace sensor_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const sensor_msgs::msg::JointState &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  sensor_msgs::msg::JointState &);
size_t get_serialized_size(
  const sensor_msgs::msg::JointState &,
  size_t current_alignment);
size_t
max_serialized_size_JointState(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace sensor_msgs


namespace cocoav_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cocoav_interfaces
cdr_serialize(
  const cocoav_interfaces::srv::CocoaVIK_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: jointstate
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.jointstate,
    cdr);
  // Member: flag
  cdr << (ros_message.flag ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cocoav_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  cocoav_interfaces::srv::CocoaVIK_Response & ros_message)
{
  // Member: jointstate
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.jointstate);

  // Member: flag
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.flag = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cocoav_interfaces
get_serialized_size(
  const cocoav_interfaces::srv::CocoaVIK_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: jointstate

  current_alignment +=
    sensor_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.jointstate, current_alignment);
  // Member: flag
  {
    size_t item_size = sizeof(ros_message.flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cocoav_interfaces
max_serialized_size_CocoaVIK_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: jointstate
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        sensor_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_JointState(
        full_bounded, current_alignment);
    }
  }

  // Member: flag
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _CocoaVIK_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const cocoav_interfaces::srv::CocoaVIK_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CocoaVIK_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<cocoav_interfaces::srv::CocoaVIK_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CocoaVIK_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const cocoav_interfaces::srv::CocoaVIK_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CocoaVIK_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_CocoaVIK_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _CocoaVIK_Response__callbacks = {
  "cocoav_interfaces::srv",
  "CocoaVIK_Response",
  _CocoaVIK_Response__cdr_serialize,
  _CocoaVIK_Response__cdr_deserialize,
  _CocoaVIK_Response__get_serialized_size,
  _CocoaVIK_Response__max_serialized_size
};

static rosidl_message_type_support_t _CocoaVIK_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CocoaVIK_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace cocoav_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_cocoav_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<cocoav_interfaces::srv::CocoaVIK_Response>()
{
  return &cocoav_interfaces::srv::typesupport_fastrtps_cpp::_CocoaVIK_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cocoav_interfaces, srv, CocoaVIK_Response)() {
  return &cocoav_interfaces::srv::typesupport_fastrtps_cpp::_CocoaVIK_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace cocoav_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _CocoaVIK__callbacks = {
  "cocoav_interfaces::srv",
  "CocoaVIK",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cocoav_interfaces, srv, CocoaVIK_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cocoav_interfaces, srv, CocoaVIK_Response)(),
};

static rosidl_service_type_support_t _CocoaVIK__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CocoaVIK__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace cocoav_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_cocoav_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<cocoav_interfaces::srv::CocoaVIK>()
{
  return &cocoav_interfaces::srv::typesupport_fastrtps_cpp::_CocoaVIK__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cocoav_interfaces, srv, CocoaVIK)() {
  return &cocoav_interfaces::srv::typesupport_fastrtps_cpp::_CocoaVIK__handle;
}

#ifdef __cplusplus
}
#endif
