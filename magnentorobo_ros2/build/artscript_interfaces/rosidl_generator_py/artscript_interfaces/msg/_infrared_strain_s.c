// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from artscript_interfaces:msg/InfraredStrain.idl
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
#include "artscript_interfaces/msg/detail/infrared_strain__struct.h"
#include "artscript_interfaces/msg/detail/infrared_strain__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool artscript_interfaces__msg__infrared_strain__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[57];
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
    assert(strncmp("artscript_interfaces.msg._infrared_strain.InfraredStrain", full_classname_dest, 56) == 0);
  }
  artscript_interfaces__msg__InfraredStrain * ros_message = _ros_message;
  {  // infrared
    PyObject * field = PyObject_GetAttrString(_pymsg, "infrared");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->infrared = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // strain
    PyObject * field = PyObject_GetAttrString(_pymsg, "strain");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->strain = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * artscript_interfaces__msg__infrared_strain__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of InfraredStrain */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("artscript_interfaces.msg._infrared_strain");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "InfraredStrain");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  artscript_interfaces__msg__InfraredStrain * ros_message = (artscript_interfaces__msg__InfraredStrain *)raw_ros_message;
  {  // infrared
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->infrared);
    {
      int rc = PyObject_SetAttrString(_pymessage, "infrared", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // strain
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->strain);
    {
      int rc = PyObject_SetAttrString(_pymessage, "strain", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
