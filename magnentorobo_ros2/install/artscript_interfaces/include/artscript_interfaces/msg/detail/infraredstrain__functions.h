// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from artscript_interfaces:msg/Infraredstrain.idl
// generated code does not contain a copyright notice

#ifndef ARTSCRIPT_INTERFACES__MSG__DETAIL__INFRAREDSTRAIN__FUNCTIONS_H_
#define ARTSCRIPT_INTERFACES__MSG__DETAIL__INFRAREDSTRAIN__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "artscript_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "artscript_interfaces/msg/detail/infraredstrain__struct.h"

/// Initialize msg/Infraredstrain message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * artscript_interfaces__msg__Infraredstrain
 * )) before or use
 * artscript_interfaces__msg__Infraredstrain__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_artscript_interfaces
bool
artscript_interfaces__msg__Infraredstrain__init(artscript_interfaces__msg__Infraredstrain * msg);

/// Finalize msg/Infraredstrain message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_artscript_interfaces
void
artscript_interfaces__msg__Infraredstrain__fini(artscript_interfaces__msg__Infraredstrain * msg);

/// Create msg/Infraredstrain message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * artscript_interfaces__msg__Infraredstrain__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_artscript_interfaces
artscript_interfaces__msg__Infraredstrain *
artscript_interfaces__msg__Infraredstrain__create();

/// Destroy msg/Infraredstrain message.
/**
 * It calls
 * artscript_interfaces__msg__Infraredstrain__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_artscript_interfaces
void
artscript_interfaces__msg__Infraredstrain__destroy(artscript_interfaces__msg__Infraredstrain * msg);


/// Initialize array of msg/Infraredstrain messages.
/**
 * It allocates the memory for the number of elements and calls
 * artscript_interfaces__msg__Infraredstrain__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_artscript_interfaces
bool
artscript_interfaces__msg__Infraredstrain__Sequence__init(artscript_interfaces__msg__Infraredstrain__Sequence * array, size_t size);

/// Finalize array of msg/Infraredstrain messages.
/**
 * It calls
 * artscript_interfaces__msg__Infraredstrain__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_artscript_interfaces
void
artscript_interfaces__msg__Infraredstrain__Sequence__fini(artscript_interfaces__msg__Infraredstrain__Sequence * array);

/// Create array of msg/Infraredstrain messages.
/**
 * It allocates the memory for the array and calls
 * artscript_interfaces__msg__Infraredstrain__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_artscript_interfaces
artscript_interfaces__msg__Infraredstrain__Sequence *
artscript_interfaces__msg__Infraredstrain__Sequence__create(size_t size);

/// Destroy array of msg/Infraredstrain messages.
/**
 * It calls
 * artscript_interfaces__msg__Infraredstrain__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_artscript_interfaces
void
artscript_interfaces__msg__Infraredstrain__Sequence__destroy(artscript_interfaces__msg__Infraredstrain__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // ARTSCRIPT_INTERFACES__MSG__DETAIL__INFRAREDSTRAIN__FUNCTIONS_H_
