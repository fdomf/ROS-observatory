// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from observatory_interfaces:srv/Camera.idl
// generated code does not contain a copyright notice
#include "observatory_interfaces/srv/camera__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `camera_action`
// Member `file_name`
#include "rosidl_generator_c/string_functions.h"

bool
observatory_interfaces__srv__Camera_Request__init(observatory_interfaces__srv__Camera_Request * msg)
{
  if (!msg) {
    return false;
  }
  // camera_action
  if (!rosidl_generator_c__String__init(&msg->camera_action)) {
    observatory_interfaces__srv__Camera_Request__fini(msg);
    return false;
  }
  // file_name
  if (!rosidl_generator_c__String__init(&msg->file_name)) {
    observatory_interfaces__srv__Camera_Request__fini(msg);
    return false;
  }
  return true;
}

void
observatory_interfaces__srv__Camera_Request__fini(observatory_interfaces__srv__Camera_Request * msg)
{
  if (!msg) {
    return;
  }
  // camera_action
  rosidl_generator_c__String__fini(&msg->camera_action);
  // file_name
  rosidl_generator_c__String__fini(&msg->file_name);
}

observatory_interfaces__srv__Camera_Request *
observatory_interfaces__srv__Camera_Request__create()
{
  observatory_interfaces__srv__Camera_Request * msg = (observatory_interfaces__srv__Camera_Request *)malloc(sizeof(observatory_interfaces__srv__Camera_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(observatory_interfaces__srv__Camera_Request));
  bool success = observatory_interfaces__srv__Camera_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
observatory_interfaces__srv__Camera_Request__destroy(observatory_interfaces__srv__Camera_Request * msg)
{
  if (msg) {
    observatory_interfaces__srv__Camera_Request__fini(msg);
  }
  free(msg);
}


bool
observatory_interfaces__srv__Camera_Request__Sequence__init(observatory_interfaces__srv__Camera_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  observatory_interfaces__srv__Camera_Request * data = NULL;
  if (size) {
    data = (observatory_interfaces__srv__Camera_Request *)calloc(size, sizeof(observatory_interfaces__srv__Camera_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = observatory_interfaces__srv__Camera_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        observatory_interfaces__srv__Camera_Request__fini(&data[i - 1]);
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
observatory_interfaces__srv__Camera_Request__Sequence__fini(observatory_interfaces__srv__Camera_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      observatory_interfaces__srv__Camera_Request__fini(&array->data[i]);
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

observatory_interfaces__srv__Camera_Request__Sequence *
observatory_interfaces__srv__Camera_Request__Sequence__create(size_t size)
{
  observatory_interfaces__srv__Camera_Request__Sequence * array = (observatory_interfaces__srv__Camera_Request__Sequence *)malloc(sizeof(observatory_interfaces__srv__Camera_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = observatory_interfaces__srv__Camera_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
observatory_interfaces__srv__Camera_Request__Sequence__destroy(observatory_interfaces__srv__Camera_Request__Sequence * array)
{
  if (array) {
    observatory_interfaces__srv__Camera_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `camera_response`
// Member `image_tags`
// Member `image_objects`
// already included above
// #include "rosidl_generator_c/string_functions.h"

bool
observatory_interfaces__srv__Camera_Response__init(observatory_interfaces__srv__Camera_Response * msg)
{
  if (!msg) {
    return false;
  }
  // camera_response
  if (!rosidl_generator_c__String__init(&msg->camera_response)) {
    observatory_interfaces__srv__Camera_Response__fini(msg);
    return false;
  }
  // image_tags
  if (!rosidl_generator_c__String__init(&msg->image_tags)) {
    observatory_interfaces__srv__Camera_Response__fini(msg);
    return false;
  }
  // image_objects
  if (!rosidl_generator_c__String__init(&msg->image_objects)) {
    observatory_interfaces__srv__Camera_Response__fini(msg);
    return false;
  }
  return true;
}

void
observatory_interfaces__srv__Camera_Response__fini(observatory_interfaces__srv__Camera_Response * msg)
{
  if (!msg) {
    return;
  }
  // camera_response
  rosidl_generator_c__String__fini(&msg->camera_response);
  // image_tags
  rosidl_generator_c__String__fini(&msg->image_tags);
  // image_objects
  rosidl_generator_c__String__fini(&msg->image_objects);
}

observatory_interfaces__srv__Camera_Response *
observatory_interfaces__srv__Camera_Response__create()
{
  observatory_interfaces__srv__Camera_Response * msg = (observatory_interfaces__srv__Camera_Response *)malloc(sizeof(observatory_interfaces__srv__Camera_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(observatory_interfaces__srv__Camera_Response));
  bool success = observatory_interfaces__srv__Camera_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
observatory_interfaces__srv__Camera_Response__destroy(observatory_interfaces__srv__Camera_Response * msg)
{
  if (msg) {
    observatory_interfaces__srv__Camera_Response__fini(msg);
  }
  free(msg);
}


bool
observatory_interfaces__srv__Camera_Response__Sequence__init(observatory_interfaces__srv__Camera_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  observatory_interfaces__srv__Camera_Response * data = NULL;
  if (size) {
    data = (observatory_interfaces__srv__Camera_Response *)calloc(size, sizeof(observatory_interfaces__srv__Camera_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = observatory_interfaces__srv__Camera_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        observatory_interfaces__srv__Camera_Response__fini(&data[i - 1]);
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
observatory_interfaces__srv__Camera_Response__Sequence__fini(observatory_interfaces__srv__Camera_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      observatory_interfaces__srv__Camera_Response__fini(&array->data[i]);
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

observatory_interfaces__srv__Camera_Response__Sequence *
observatory_interfaces__srv__Camera_Response__Sequence__create(size_t size)
{
  observatory_interfaces__srv__Camera_Response__Sequence * array = (observatory_interfaces__srv__Camera_Response__Sequence *)malloc(sizeof(observatory_interfaces__srv__Camera_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = observatory_interfaces__srv__Camera_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
observatory_interfaces__srv__Camera_Response__Sequence__destroy(observatory_interfaces__srv__Camera_Response__Sequence * array)
{
  if (array) {
    observatory_interfaces__srv__Camera_Response__Sequence__fini(array);
  }
  free(array);
}
