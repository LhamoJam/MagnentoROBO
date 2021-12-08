// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from artscript_interfaces:srv/ServoSingle.idl
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
#include "rosidl_runtime_c/visibility_control.h"
#include "artscript_interfaces/srv/detail/servo_single__struct.h"
#include "artscript_interfaces/srv/detail/servo_single__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool artscript_interfaces__srv__servo_single__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[59];
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
    assert(strncmp("artscript_interfaces.srv._servo_single.ServoSingle_Request", full_classname_dest, 58) == 0);
  }
  artscript_interfaces__srv__ServoSingle_Request * ros_message = _ros_message;
  {  // servo_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "servo_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->servo_id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // servo_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "servo_angle");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->servo_angle = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // servo_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "servo_speed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->servo_speed = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * artscript_interfaces__srv__servo_single__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ServoSingle_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("artscript_interfaces.srv._servo_single");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ServoSingle_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  artscript_interfaces__srv__ServoSingle_Request * ros_message = (artscript_interfaces__srv__ServoSingle_Request *)raw_ros_message;
  {  // servo_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->servo_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "servo_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // servo_angle
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->servo_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "servo_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // servo_speed
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->servo_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "servo_speed", field);
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
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "artscript_interfaces/srv/detail/servo_single__struct.h"
// already included above
// #include "artscript_interfaces/srv/detail/servo_single__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool artscript_interfaces__srv__servo_single__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[60];
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
    assert(strncmp("artscript_interfaces.srv._servo_single.ServoSingle_Response", full_classname_dest, 59) == 0);
  }
  artscript_interfaces__srv__ServoSingle_Response * ros_message = _ros_message;
  {  // move_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "move_status");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->move_status = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * artscript_interfaces__srv__servo_single__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ServoSingle_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("artscript_interfaces.srv._servo_single");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ServoSingle_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  artscript_interfaces__srv__ServoSingle_Response * ros_message = (artscript_interfaces__srv__ServoSingle_Response *)raw_ros_message;
  {  // move_status
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->move_status ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "move_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
