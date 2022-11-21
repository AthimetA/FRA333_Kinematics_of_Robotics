// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cocoav_interfaces:srv/SolveIK.idl
// generated code does not contain a copyright notice
#include "cocoav_interfaces/srv/detail/solve_ik__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `position`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
cocoav_interfaces__srv__SolveIK_Request__init(cocoav_interfaces__srv__SolveIK_Request * msg)
{
  if (!msg) {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__init(&msg->position)) {
    cocoav_interfaces__srv__SolveIK_Request__fini(msg);
    return false;
  }
  // jointorientation
  // r
  msg->r[0] = 1l;
  msg->r[1] = 1l;
  return true;
}

void
cocoav_interfaces__srv__SolveIK_Request__fini(cocoav_interfaces__srv__SolveIK_Request * msg)
{
  if (!msg) {
    return;
  }
  // position
  geometry_msgs__msg__Point__fini(&msg->position);
  // jointorientation
  // r
}

bool
cocoav_interfaces__srv__SolveIK_Request__are_equal(const cocoav_interfaces__srv__SolveIK_Request * lhs, const cocoav_interfaces__srv__SolveIK_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // jointorientation
  if (lhs->jointorientation != rhs->jointorientation) {
    return false;
  }
  // r
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->r[i] != rhs->r[i]) {
      return false;
    }
  }
  return true;
}

bool
cocoav_interfaces__srv__SolveIK_Request__copy(
  const cocoav_interfaces__srv__SolveIK_Request * input,
  cocoav_interfaces__srv__SolveIK_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // jointorientation
  output->jointorientation = input->jointorientation;
  // r
  for (size_t i = 0; i < 2; ++i) {
    output->r[i] = input->r[i];
  }
  return true;
}

cocoav_interfaces__srv__SolveIK_Request *
cocoav_interfaces__srv__SolveIK_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cocoav_interfaces__srv__SolveIK_Request * msg = (cocoav_interfaces__srv__SolveIK_Request *)allocator.allocate(sizeof(cocoav_interfaces__srv__SolveIK_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cocoav_interfaces__srv__SolveIK_Request));
  bool success = cocoav_interfaces__srv__SolveIK_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cocoav_interfaces__srv__SolveIK_Request__destroy(cocoav_interfaces__srv__SolveIK_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cocoav_interfaces__srv__SolveIK_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cocoav_interfaces__srv__SolveIK_Request__Sequence__init(cocoav_interfaces__srv__SolveIK_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cocoav_interfaces__srv__SolveIK_Request * data = NULL;

  if (size) {
    data = (cocoav_interfaces__srv__SolveIK_Request *)allocator.zero_allocate(size, sizeof(cocoav_interfaces__srv__SolveIK_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cocoav_interfaces__srv__SolveIK_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cocoav_interfaces__srv__SolveIK_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
cocoav_interfaces__srv__SolveIK_Request__Sequence__fini(cocoav_interfaces__srv__SolveIK_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cocoav_interfaces__srv__SolveIK_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

cocoav_interfaces__srv__SolveIK_Request__Sequence *
cocoav_interfaces__srv__SolveIK_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cocoav_interfaces__srv__SolveIK_Request__Sequence * array = (cocoav_interfaces__srv__SolveIK_Request__Sequence *)allocator.allocate(sizeof(cocoav_interfaces__srv__SolveIK_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cocoav_interfaces__srv__SolveIK_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cocoav_interfaces__srv__SolveIK_Request__Sequence__destroy(cocoav_interfaces__srv__SolveIK_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cocoav_interfaces__srv__SolveIK_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cocoav_interfaces__srv__SolveIK_Request__Sequence__are_equal(const cocoav_interfaces__srv__SolveIK_Request__Sequence * lhs, const cocoav_interfaces__srv__SolveIK_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cocoav_interfaces__srv__SolveIK_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cocoav_interfaces__srv__SolveIK_Request__Sequence__copy(
  const cocoav_interfaces__srv__SolveIK_Request__Sequence * input,
  cocoav_interfaces__srv__SolveIK_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cocoav_interfaces__srv__SolveIK_Request);
    cocoav_interfaces__srv__SolveIK_Request * data =
      (cocoav_interfaces__srv__SolveIK_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cocoav_interfaces__srv__SolveIK_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          cocoav_interfaces__srv__SolveIK_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cocoav_interfaces__srv__SolveIK_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `jointstate`
#include "sensor_msgs/msg/detail/joint_state__functions.h"

bool
cocoav_interfaces__srv__SolveIK_Response__init(cocoav_interfaces__srv__SolveIK_Response * msg)
{
  if (!msg) {
    return false;
  }
  // jointstate
  if (!sensor_msgs__msg__JointState__init(&msg->jointstate)) {
    cocoav_interfaces__srv__SolveIK_Response__fini(msg);
    return false;
  }
  // flag
  return true;
}

void
cocoav_interfaces__srv__SolveIK_Response__fini(cocoav_interfaces__srv__SolveIK_Response * msg)
{
  if (!msg) {
    return;
  }
  // jointstate
  sensor_msgs__msg__JointState__fini(&msg->jointstate);
  // flag
}

bool
cocoav_interfaces__srv__SolveIK_Response__are_equal(const cocoav_interfaces__srv__SolveIK_Response * lhs, const cocoav_interfaces__srv__SolveIK_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // jointstate
  if (!sensor_msgs__msg__JointState__are_equal(
      &(lhs->jointstate), &(rhs->jointstate)))
  {
    return false;
  }
  // flag
  if (lhs->flag != rhs->flag) {
    return false;
  }
  return true;
}

bool
cocoav_interfaces__srv__SolveIK_Response__copy(
  const cocoav_interfaces__srv__SolveIK_Response * input,
  cocoav_interfaces__srv__SolveIK_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // jointstate
  if (!sensor_msgs__msg__JointState__copy(
      &(input->jointstate), &(output->jointstate)))
  {
    return false;
  }
  // flag
  output->flag = input->flag;
  return true;
}

cocoav_interfaces__srv__SolveIK_Response *
cocoav_interfaces__srv__SolveIK_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cocoav_interfaces__srv__SolveIK_Response * msg = (cocoav_interfaces__srv__SolveIK_Response *)allocator.allocate(sizeof(cocoav_interfaces__srv__SolveIK_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cocoav_interfaces__srv__SolveIK_Response));
  bool success = cocoav_interfaces__srv__SolveIK_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cocoav_interfaces__srv__SolveIK_Response__destroy(cocoav_interfaces__srv__SolveIK_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cocoav_interfaces__srv__SolveIK_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cocoav_interfaces__srv__SolveIK_Response__Sequence__init(cocoav_interfaces__srv__SolveIK_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cocoav_interfaces__srv__SolveIK_Response * data = NULL;

  if (size) {
    data = (cocoav_interfaces__srv__SolveIK_Response *)allocator.zero_allocate(size, sizeof(cocoav_interfaces__srv__SolveIK_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cocoav_interfaces__srv__SolveIK_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cocoav_interfaces__srv__SolveIK_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
cocoav_interfaces__srv__SolveIK_Response__Sequence__fini(cocoav_interfaces__srv__SolveIK_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cocoav_interfaces__srv__SolveIK_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

cocoav_interfaces__srv__SolveIK_Response__Sequence *
cocoav_interfaces__srv__SolveIK_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cocoav_interfaces__srv__SolveIK_Response__Sequence * array = (cocoav_interfaces__srv__SolveIK_Response__Sequence *)allocator.allocate(sizeof(cocoav_interfaces__srv__SolveIK_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cocoav_interfaces__srv__SolveIK_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cocoav_interfaces__srv__SolveIK_Response__Sequence__destroy(cocoav_interfaces__srv__SolveIK_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cocoav_interfaces__srv__SolveIK_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cocoav_interfaces__srv__SolveIK_Response__Sequence__are_equal(const cocoav_interfaces__srv__SolveIK_Response__Sequence * lhs, const cocoav_interfaces__srv__SolveIK_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cocoav_interfaces__srv__SolveIK_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cocoav_interfaces__srv__SolveIK_Response__Sequence__copy(
  const cocoav_interfaces__srv__SolveIK_Response__Sequence * input,
  cocoav_interfaces__srv__SolveIK_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cocoav_interfaces__srv__SolveIK_Response);
    cocoav_interfaces__srv__SolveIK_Response * data =
      (cocoav_interfaces__srv__SolveIK_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cocoav_interfaces__srv__SolveIK_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          cocoav_interfaces__srv__SolveIK_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cocoav_interfaces__srv__SolveIK_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
