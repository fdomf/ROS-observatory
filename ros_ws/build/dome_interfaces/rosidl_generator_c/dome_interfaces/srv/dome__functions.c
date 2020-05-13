// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dome_interfaces:srv/Dome.idl
// generated code does not contain a copyright notice
#include "dome_interfaces/srv/dome__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `dome_action`
#include "rosidl_generator_c/string_functions.h"

bool
dome_interfaces__srv__Dome_Request__init(dome_interfaces__srv__Dome_Request * msg)
{
  if (!msg) {
    return false;
  }
  // dome_action
  if (!rosidl_generator_c__String__init(&msg->dome_action)) {
    dome_interfaces__srv__Dome_Request__fini(msg);
    return false;
  }
  return true;
}

void
dome_interfaces__srv__Dome_Request__fini(dome_interfaces__srv__Dome_Request * msg)
{
  if (!msg) {
    return;
  }
  // dome_action
  rosidl_generator_c__String__fini(&msg->dome_action);
}

dome_interfaces__srv__Dome_Request *
dome_interfaces__srv__Dome_Request__create()
{
  dome_interfaces__srv__Dome_Request * msg = (dome_interfaces__srv__Dome_Request *)malloc(sizeof(dome_interfaces__srv__Dome_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dome_interfaces__srv__Dome_Request));
  bool success = dome_interfaces__srv__Dome_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
dome_interfaces__srv__Dome_Request__destroy(dome_interfaces__srv__Dome_Request * msg)
{
  if (msg) {
    dome_interfaces__srv__Dome_Request__fini(msg);
  }
  free(msg);
}


bool
dome_interfaces__srv__Dome_Request__Sequence__init(dome_interfaces__srv__Dome_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  dome_interfaces__srv__Dome_Request * data = NULL;
  if (size) {
    data = (dome_interfaces__srv__Dome_Request *)calloc(size, sizeof(dome_interfaces__srv__Dome_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dome_interfaces__srv__Dome_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dome_interfaces__srv__Dome_Request__fini(&data[i - 1]);
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
dome_interfaces__srv__Dome_Request__Sequence__fini(dome_interfaces__srv__Dome_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      dome_interfaces__srv__Dome_Request__fini(&array->data[i]);
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

dome_interfaces__srv__Dome_Request__Sequence *
dome_interfaces__srv__Dome_Request__Sequence__create(size_t size)
{
  dome_interfaces__srv__Dome_Request__Sequence * array = (dome_interfaces__srv__Dome_Request__Sequence *)malloc(sizeof(dome_interfaces__srv__Dome_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = dome_interfaces__srv__Dome_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
dome_interfaces__srv__Dome_Request__Sequence__destroy(dome_interfaces__srv__Dome_Request__Sequence * array)
{
  if (array) {
    dome_interfaces__srv__Dome_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `dome_response`
// already included above
// #include "rosidl_generator_c/string_functions.h"

bool
dome_interfaces__srv__Dome_Response__init(dome_interfaces__srv__Dome_Response * msg)
{
  if (!msg) {
    return false;
  }
  // dome_response
  if (!rosidl_generator_c__String__init(&msg->dome_response)) {
    dome_interfaces__srv__Dome_Response__fini(msg);
    return false;
  }
  return true;
}

void
dome_interfaces__srv__Dome_Response__fini(dome_interfaces__srv__Dome_Response * msg)
{
  if (!msg) {
    return;
  }
  // dome_response
  rosidl_generator_c__String__fini(&msg->dome_response);
}

dome_interfaces__srv__Dome_Response *
dome_interfaces__srv__Dome_Response__create()
{
  dome_interfaces__srv__Dome_Response * msg = (dome_interfaces__srv__Dome_Response *)malloc(sizeof(dome_interfaces__srv__Dome_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dome_interfaces__srv__Dome_Response));
  bool success = dome_interfaces__srv__Dome_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
dome_interfaces__srv__Dome_Response__destroy(dome_interfaces__srv__Dome_Response * msg)
{
  if (msg) {
    dome_interfaces__srv__Dome_Response__fini(msg);
  }
  free(msg);
}


bool
dome_interfaces__srv__Dome_Response__Sequence__init(dome_interfaces__srv__Dome_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  dome_interfaces__srv__Dome_Response * data = NULL;
  if (size) {
    data = (dome_interfaces__srv__Dome_Response *)calloc(size, sizeof(dome_interfaces__srv__Dome_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dome_interfaces__srv__Dome_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dome_interfaces__srv__Dome_Response__fini(&data[i - 1]);
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
dome_interfaces__srv__Dome_Response__Sequence__fini(dome_interfaces__srv__Dome_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      dome_interfaces__srv__Dome_Response__fini(&array->data[i]);
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

dome_interfaces__srv__Dome_Response__Sequence *
dome_interfaces__srv__Dome_Response__Sequence__create(size_t size)
{
  dome_interfaces__srv__Dome_Response__Sequence * array = (dome_interfaces__srv__Dome_Response__Sequence *)malloc(sizeof(dome_interfaces__srv__Dome_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = dome_interfaces__srv__Dome_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
dome_interfaces__srv__Dome_Response__Sequence__destroy(dome_interfaces__srv__Dome_Response__Sequence * array)
{
  if (array) {
    dome_interfaces__srv__Dome_Response__Sequence__fini(array);
  }
  free(array);
}
