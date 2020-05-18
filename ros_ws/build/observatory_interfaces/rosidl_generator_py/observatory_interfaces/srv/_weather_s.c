// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from observatory_interfaces:srv/Weather.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_generator_c/visibility_control.h"
#include "observatory_interfaces/srv/weather__struct.h"
#include "observatory_interfaces/srv/weather__functions.h"

#include "rosidl_generator_c/string.h"
#include "rosidl_generator_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool observatory_interfaces__srv__weather__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp(
        "observatory_interfaces.srv._weather.Weather_Request",
        full_classname_dest, 51) == 0);
  }
  observatory_interfaces__srv__Weather_Request * ros_message = _ros_message;
  {  // weather_action
    PyObject * field = PyObject_GetAttrString(_pymsg, "weather_action");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_generator_c__String__assign(&ros_message->weather_action, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * observatory_interfaces__srv__weather__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Weather_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("observatory_interfaces.srv._weather");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Weather_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  observatory_interfaces__srv__Weather_Request * ros_message = (observatory_interfaces__srv__Weather_Request *)raw_ros_message;
  {  // weather_action
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->weather_action.data,
      strlen(ros_message->weather_action.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "weather_action", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_generator_c/visibility_control.h"
// already included above
// #include "observatory_interfaces/srv/weather__struct.h"
// already included above
// #include "observatory_interfaces/srv/weather__functions.h"

#include "rosidl_generator_c/primitives_sequence.h"
#include "rosidl_generator_c/primitives_sequence_functions.h"
// already included above
// #include "rosidl_generator_c/string.h"
// already included above
// #include "rosidl_generator_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool observatory_interfaces__srv__weather__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[53];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp(
        "observatory_interfaces.srv._weather.Weather_Response",
        full_classname_dest, 52) == 0);
  }
  observatory_interfaces__srv__Weather_Response * ros_message = _ros_message;
  {  // data_response
    PyObject * field = PyObject_GetAttrString(_pymsg, "data_response");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'data_response'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = 10;
    rosidl_generator_c__String * dest = ros_message->data_response;
    for (Py_ssize_t i = 0; i < size; ++i) {
      PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
      if (!item) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      assert(PyUnicode_Check(item));
      PyObject * encoded_item = PyUnicode_AsUTF8String(item);
      if (!encoded_item) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_generator_c__String__assign(&dest[i], PyBytes_AS_STRING(encoded_item));
      Py_DECREF(encoded_item);
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * observatory_interfaces__srv__weather__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Weather_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("observatory_interfaces.srv._weather");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Weather_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  observatory_interfaces__srv__Weather_Response * ros_message = (observatory_interfaces__srv__Weather_Response *)raw_ros_message;
  {  // data_response
    PyObject * field = NULL;
    size_t size = 10;
    rosidl_generator_c__String * src = ros_message->data_response;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      PyObject * decoded_item = PyUnicode_DecodeUTF8(src[i].data, strlen(src[i].data), "strict");
      if (!decoded_item) {
        return NULL;
      }
      int rc = PyList_SetItem(field, i, decoded_item);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "data_response", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
