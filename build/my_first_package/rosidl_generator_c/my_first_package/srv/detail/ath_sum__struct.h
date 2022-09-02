// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_first_package:srv/AthSum.idl
// generated code does not contain a copyright notice

#ifndef MY_FIRST_PACKAGE__SRV__DETAIL__ATH_SUM__STRUCT_H_
#define MY_FIRST_PACKAGE__SRV__DETAIL__ATH_SUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/AthSum in the package my_first_package.
typedef struct my_first_package__srv__AthSum_Request
{
  int64_t a;
  int64_t b;
} my_first_package__srv__AthSum_Request;

// Struct for a sequence of my_first_package__srv__AthSum_Request.
typedef struct my_first_package__srv__AthSum_Request__Sequence
{
  my_first_package__srv__AthSum_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_first_package__srv__AthSum_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/AthSum in the package my_first_package.
typedef struct my_first_package__srv__AthSum_Response
{
  int64_t sum;
} my_first_package__srv__AthSum_Response;

// Struct for a sequence of my_first_package__srv__AthSum_Response.
typedef struct my_first_package__srv__AthSum_Response__Sequence
{
  my_first_package__srv__AthSum_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_first_package__srv__AthSum_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_FIRST_PACKAGE__SRV__DETAIL__ATH_SUM__STRUCT_H_
