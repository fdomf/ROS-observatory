// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dome_interfaces:srv/Weather.idl
// generated code does not contain a copyright notice
#include "dome_interfaces/srv/weather__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `weather_action`
#include "rosidl_generator_c/string_functions.h"

bool
dome_interfaces__srv__Weather_Request__init(dome_interfaces__srv__Weather_Request * msg)
{
  if (!msg) {
    return false;
  }
  // weather_action
  if (!rosidl_generator_c__String__init(&msg->weather_action)) {
    dome_interfaces__srv__Weather_Request__fini(msg);
    return false;
  }
  return true;
}

void
dome_interfaces__srv__Weather_Request__fini(dome_interfaces__srv__Weather_Request * msg)
{
  if (!msg) {
    return;
  }
  // weather_action
  rosidl_generator_c__String__fini(&msg->weather_action);
}

dome_interfaces__srv__Weather_Request *
dome_interfaces__srv__Weather_Request__create()
{
  dome_interfaces__srv__Weather_Request * msg = (dome_interfaces__srv__Weather_Request *)malloc(sizeof(dome_interfaces__srv__Weather_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dome_interfaces__srv__Weather_Request));
  bool success = dome_interfaces__srv__Weather_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
dome_interfaces__srv__Weather_Request__destroy(dome_interfaces__srv__Weather_Request * msg)
{
  if (msg) {
    dome_interfaces__srv__Weather_Request__fini(msg);
  }
  free(msg);
}


bool
dome_interfaces__srv__Weather_Request__Sequence__init(dome_interfaces__srv__Weather_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  dome_interfaces__srv__Weather_Request * data = NULL;
  if (size) {
    data = (dome_interfaces__srv__Weather_Request *)calloc(size, sizeof(dome_interfaces__srv__Weather_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dome_interfaces__srv__Weather_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dome_interfaces__srv__Weather_Request__fini(&data[i - 1]);
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
dome_interfaces__srv__Weather_Request__Sequence__fini(dome_interfaces__srv__Weather_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      dome_interfaces__srv__Weather_Request__fini(&array->data[i]);
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

dome_interfaces__srv__Weather_Request__Sequence *
dome_interfaces__srv__Weather_Request__Sequence__create(size_t size)
{
  dome_interfaces__srv__Weather_Request__Sequence * array = (dome_interfaces__srv__Weather_Request__Sequence *)malloc(sizeof(dome_interfaces__srv__Weather_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = dome_interfaces__srv__Weather_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
dome_interfaces__srv__Weather_Request__Sequence__destroy(dome_interfaces__srv__Weather_Request__Sequence * array)
{
  if (array) {
    dome_interfaces__srv__Weather_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `data_response`
// already included above
// #include "rosidl_generator_c/string_functions.h"

bool
dome_interfaces__srv__Weather_Response__init(dome_interfaces__srv__Weather_Response * msg)
{
  if (!msg) {
    return false;
  }
  // data_response
  for (size_t i = 0; i < 10; ++i) {
    if (!rosidl_generator_c__String__init(&msg->data_response[i])) {
      dome_interfaces__srv__Weather_Response__fini(msg);
      return false;
    }
  }
  return true;
}

void
dome_interfaces__srv__Weather_Response__fini(dome_interfaces__srv__Weather_Response * msg)
{
  if (!msg) {
    return;
  }
  // data_response
  for (size_t i = 0; i < 10; ++i) {
    rosidl_generator_c__String__fini(&msg->data_response[i]);
  }
}

dome_interfaces__srv__Weather_Response *
dome_interfaces__srv__Weather_Response__create()
{
  dome_interfaces__srv__Weather_Response * msg = (dome_interfaces__srv__Weather_Response *)malloc(sizeof(dome_interfaces__srv__Weather_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dome_interfaces__srv__Weather_Response));
  bool success = dome_interfaces__srv__Weather_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
dome_interfaces__srv__Weather_Response__destroy(dome_interfaces__srv__Weather_Response * msg)
{
  if (msg) {
    dome_interfaces__srv__Weather_Response__fini(msg);
  }
  free(msg);
}


bool
dome_interfaces__srv__Weather_Response__Sequence__init(dome_interfaces__srv__Weather_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  dome_interfaces__srv__Weather_Response * data = NULL;
  if (size) {
    data = (dome_interfaces__srv__Weather_Response *)calloc(size, sizeof(dome_interfaces__srv__Weather_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dome_interfaces__srv__Weather_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dome_interfaces__srv__Weather_Response__fini(&data[i - 1]);
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
dome_interfaces__srv__Weather_Response__Sequence__fini(dome_interfaces__srv__Weather_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      dome_interfaces__srv__Weather_Response__fini(&array->data[i]);
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

dome_interfaces__srv__Weather_Response__Sequence *
dome_interfaces__srv__Weather_Response__Sequence__create(size_t size)
{
  dome_interfaces__srv__Weather_Response__Sequence * array = (dome_interfaces__srv__Weather_Response__Sequence *)malloc(sizeof(dome_interfaces__srv__Weather_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = dome_interfaces__srv__Weather_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
dome_interfaces__srv__Weather_Response__Sequence__destroy(dome_interfaces__srv__Weather_Response__Sequence * array)
{
  if (array) {
    dome_interfaces__srv__Weather_Response__Sequence__fini(array);
  }
  free(array);
}
