// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dome_interfaces:msg/Sensor.idl
// generated code does not contain a copyright notice
#include "dome_interfaces/msg/sensor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `sensor_status`
#include "rosidl_generator_c/string_functions.h"

bool
dome_interfaces__msg__Sensor__init(dome_interfaces__msg__Sensor * msg)
{
  if (!msg) {
    return false;
  }
  // sensor_status
  for (size_t i = 0; i < 8; ++i) {
    if (!rosidl_generator_c__String__init(&msg->sensor_status[i])) {
      dome_interfaces__msg__Sensor__fini(msg);
      return false;
    }
  }
  return true;
}

void
dome_interfaces__msg__Sensor__fini(dome_interfaces__msg__Sensor * msg)
{
  if (!msg) {
    return;
  }
  // sensor_status
  for (size_t i = 0; i < 8; ++i) {
    rosidl_generator_c__String__fini(&msg->sensor_status[i]);
  }
}

dome_interfaces__msg__Sensor *
dome_interfaces__msg__Sensor__create()
{
  dome_interfaces__msg__Sensor * msg = (dome_interfaces__msg__Sensor *)malloc(sizeof(dome_interfaces__msg__Sensor));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dome_interfaces__msg__Sensor));
  bool success = dome_interfaces__msg__Sensor__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
dome_interfaces__msg__Sensor__destroy(dome_interfaces__msg__Sensor * msg)
{
  if (msg) {
    dome_interfaces__msg__Sensor__fini(msg);
  }
  free(msg);
}


bool
dome_interfaces__msg__Sensor__Sequence__init(dome_interfaces__msg__Sensor__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  dome_interfaces__msg__Sensor * data = NULL;
  if (size) {
    data = (dome_interfaces__msg__Sensor *)calloc(size, sizeof(dome_interfaces__msg__Sensor));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dome_interfaces__msg__Sensor__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dome_interfaces__msg__Sensor__fini(&data[i - 1]);
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
dome_interfaces__msg__Sensor__Sequence__fini(dome_interfaces__msg__Sensor__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      dome_interfaces__msg__Sensor__fini(&array->data[i]);
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

dome_interfaces__msg__Sensor__Sequence *
dome_interfaces__msg__Sensor__Sequence__create(size_t size)
{
  dome_interfaces__msg__Sensor__Sequence * array = (dome_interfaces__msg__Sensor__Sequence *)malloc(sizeof(dome_interfaces__msg__Sensor__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = dome_interfaces__msg__Sensor__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
dome_interfaces__msg__Sensor__Sequence__destroy(dome_interfaces__msg__Sensor__Sequence * array)
{
  if (array) {
    dome_interfaces__msg__Sensor__Sequence__fini(array);
  }
  free(array);
}
