// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dome_interfaces:msg/Action.idl
// generated code does not contain a copyright notice
#include "dome_interfaces/msg/action__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `action`
#include "rosidl_generator_c/string_functions.h"

bool
dome_interfaces__msg__Action__init(dome_interfaces__msg__Action * msg)
{
  if (!msg) {
    return false;
  }
  // action
  if (!rosidl_generator_c__String__init(&msg->action)) {
    dome_interfaces__msg__Action__fini(msg);
    return false;
  }
  return true;
}

void
dome_interfaces__msg__Action__fini(dome_interfaces__msg__Action * msg)
{
  if (!msg) {
    return;
  }
  // action
  rosidl_generator_c__String__fini(&msg->action);
}

dome_interfaces__msg__Action *
dome_interfaces__msg__Action__create()
{
  dome_interfaces__msg__Action * msg = (dome_interfaces__msg__Action *)malloc(sizeof(dome_interfaces__msg__Action));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dome_interfaces__msg__Action));
  bool success = dome_interfaces__msg__Action__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
dome_interfaces__msg__Action__destroy(dome_interfaces__msg__Action * msg)
{
  if (msg) {
    dome_interfaces__msg__Action__fini(msg);
  }
  free(msg);
}


bool
dome_interfaces__msg__Action__Sequence__init(dome_interfaces__msg__Action__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  dome_interfaces__msg__Action * data = NULL;
  if (size) {
    data = (dome_interfaces__msg__Action *)calloc(size, sizeof(dome_interfaces__msg__Action));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dome_interfaces__msg__Action__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dome_interfaces__msg__Action__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
dome_interfaces__msg__Action__Sequence__fini(dome_interfaces__msg__Action__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      dome_interfaces__msg__Action__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

dome_interfaces__msg__Action__Sequence *
dome_interfaces__msg__Action__Sequence__create(size_t size)
{
  dome_interfaces__msg__Action__Sequence * array = (dome_interfaces__msg__Action__Sequence *)malloc(sizeof(dome_interfaces__msg__Action__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = dome_interfaces__msg__Action__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
dome_interfaces__msg__Action__Sequence__destroy(dome_interfaces__msg__Action__Sequence * array)
{
  if (array) {
    dome_interfaces__msg__Action__Sequence__fini(array);
  }
  free(array);
}
