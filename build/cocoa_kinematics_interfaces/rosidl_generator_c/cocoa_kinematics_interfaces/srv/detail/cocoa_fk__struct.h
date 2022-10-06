// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cocoa_kinematics_interfaces:srv/CocoaFK.idl
// generated code does not contain a copyright notice

#ifndef COCOA_KINEMATICS_INTERFACES__SRV__DETAIL__COCOA_FK__STRUCT_H_
#define COCOA_KINEMATICS_INTERFACES__SRV__DETAIL__COCOA_FK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'jointstate'
#include "sensor_msgs/msg/detail/joint_state__struct.h"

// Struct defined in srv/CocoaFK in the package cocoa_kinematics_interfaces.
typedef struct cocoa_kinematics_interfaces__srv__CocoaFK_Request
{
  sensor_msgs__msg__JointState jointstate;
} cocoa_kinematics_interfaces__srv__CocoaFK_Request;

// Struct for a sequence of cocoa_kinematics_interfaces__srv__CocoaFK_Request.
typedef struct cocoa_kinematics_interfaces__srv__CocoaFK_Request__Sequence
{
  cocoa_kinematics_interfaces__srv__CocoaFK_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cocoa_kinematics_interfaces__srv__CocoaFK_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'positionendeffector'
#include "geometry_msgs/msg/detail/point__struct.h"

// Struct defined in srv/CocoaFK in the package cocoa_kinematics_interfaces.
typedef struct cocoa_kinematics_interfaces__srv__CocoaFK_Response
{
  geometry_msgs__msg__Point positionendeffector;
} cocoa_kinematics_interfaces__srv__CocoaFK_Response;

// Struct for a sequence of cocoa_kinematics_interfaces__srv__CocoaFK_Response.
typedef struct cocoa_kinematics_interfaces__srv__CocoaFK_Response__Sequence
{
  cocoa_kinematics_interfaces__srv__CocoaFK_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cocoa_kinematics_interfaces__srv__CocoaFK_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COCOA_KINEMATICS_INTERFACES__SRV__DETAIL__COCOA_FK__STRUCT_H_
