// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from my_first_package:msg/AddBook.idl
// generated code does not contain a copyright notice
#include "my_first_package/msg/detail/add_book__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "my_first_package/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "my_first_package/msg/detail/add_book__struct.h"
#include "my_first_package/msg/detail/add_book__functions.h"
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

#include "rosidl_runtime_c/string.h"  // address, first_name, last_name
#include "rosidl_runtime_c/string_functions.h"  // address, first_name, last_name

// forward declare type support functions


using _AddBook__ros_msg_type = my_first_package__msg__AddBook;

static bool _AddBook__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AddBook__ros_msg_type * ros_message = static_cast<const _AddBook__ros_msg_type *>(untyped_ros_message);
  // Field name: first_name
  {
    const rosidl_runtime_c__String * str = &ros_message->first_name;
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

  // Field name: last_name
  {
    const rosidl_runtime_c__String * str = &ros_message->last_name;
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

  // Field name: gender
  {
    cdr << (ros_message->gender ? true : false);
  }

  // Field name: age
  {
    cdr << ros_message->age;
  }

  // Field name: address
  {
    const rosidl_runtime_c__String * str = &ros_message->address;
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

static bool _AddBook__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AddBook__ros_msg_type * ros_message = static_cast<_AddBook__ros_msg_type *>(untyped_ros_message);
  // Field name: first_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->first_name.data) {
      rosidl_runtime_c__String__init(&ros_message->first_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->first_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'first_name'\n");
      return false;
    }
  }

  // Field name: last_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->last_name.data) {
      rosidl_runtime_c__String__init(&ros_message->last_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->last_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'last_name'\n");
      return false;
    }
  }

  // Field name: gender
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->gender = tmp ? true : false;
  }

  // Field name: age
  {
    cdr >> ros_message->age;
  }

  // Field name: address
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->address.data) {
      rosidl_runtime_c__String__init(&ros_message->address);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->address,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'address'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_first_package
size_t get_serialized_size_my_first_package__msg__AddBook(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AddBook__ros_msg_type * ros_message = static_cast<const _AddBook__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name first_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->first_name.size + 1);
  // field.name last_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->last_name.size + 1);
  // field.name gender
  {
    size_t item_size = sizeof(ros_message->gender);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name age
  {
    size_t item_size = sizeof(ros_message->age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name address
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->address.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _AddBook__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_my_first_package__msg__AddBook(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_first_package
size_t max_serialized_size_my_first_package__msg__AddBook(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: first_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: last_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: gender
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: age
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: address
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

static size_t _AddBook__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_my_first_package__msg__AddBook(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AddBook = {
  "my_first_package::msg",
  "AddBook",
  _AddBook__cdr_serialize,
  _AddBook__cdr_deserialize,
  _AddBook__get_serialized_size,
  _AddBook__max_serialized_size
};

static rosidl_message_type_support_t _AddBook__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AddBook,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_first_package, msg, AddBook)() {
  return &_AddBook__type_support;
}

#if defined(__cplusplus)
}
#endif