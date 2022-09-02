// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from my_first_package:msg/AddBook.idl
// generated code does not contain a copyright notice
#include "my_first_package/msg/detail/add_book__rosidl_typesupport_fastrtps_cpp.hpp"
#include "my_first_package/msg/detail/add_book__struct.hpp"

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

namespace my_first_package
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_first_package
cdr_serialize(
  const my_first_package::msg::AddBook & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: first_name
  cdr << ros_message.first_name;
  // Member: last_name
  cdr << ros_message.last_name;
  // Member: gender
  cdr << (ros_message.gender ? true : false);
  // Member: age
  cdr << ros_message.age;
  // Member: address
  cdr << ros_message.address;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_first_package
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  my_first_package::msg::AddBook & ros_message)
{
  // Member: first_name
  cdr >> ros_message.first_name;

  // Member: last_name
  cdr >> ros_message.last_name;

  // Member: gender
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.gender = tmp ? true : false;
  }

  // Member: age
  cdr >> ros_message.age;

  // Member: address
  cdr >> ros_message.address;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_first_package
get_serialized_size(
  const my_first_package::msg::AddBook & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: first_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.first_name.size() + 1);
  // Member: last_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.last_name.size() + 1);
  // Member: gender
  {
    size_t item_size = sizeof(ros_message.gender);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: age
  {
    size_t item_size = sizeof(ros_message.age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: address
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.address.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_first_package
max_serialized_size_AddBook(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: first_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: last_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: gender
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: age
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: address
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

static bool _AddBook__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const my_first_package::msg::AddBook *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AddBook__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<my_first_package::msg::AddBook *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AddBook__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const my_first_package::msg::AddBook *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AddBook__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_AddBook(full_bounded, 0);
}

static message_type_support_callbacks_t _AddBook__callbacks = {
  "my_first_package::msg",
  "AddBook",
  _AddBook__cdr_serialize,
  _AddBook__cdr_deserialize,
  _AddBook__get_serialized_size,
  _AddBook__max_serialized_size
};

static rosidl_message_type_support_t _AddBook__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AddBook__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace my_first_package

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_my_first_package
const rosidl_message_type_support_t *
get_message_type_support_handle<my_first_package::msg::AddBook>()
{
  return &my_first_package::msg::typesupport_fastrtps_cpp::_AddBook__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_first_package, msg, AddBook)() {
  return &my_first_package::msg::typesupport_fastrtps_cpp::_AddBook__handle;
}

#ifdef __cplusplus
}
#endif
