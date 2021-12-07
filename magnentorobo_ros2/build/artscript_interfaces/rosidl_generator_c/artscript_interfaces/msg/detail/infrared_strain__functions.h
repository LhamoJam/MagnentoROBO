// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from artscript_interfaces:msg/InfraredStrain.idl
// generated code does not contain a copyright notice

#ifndef ARTSCRIPT_INTERFACES__MSG__DETAIL__INFRARED_STRAIN__FUNCTIONS_H_
#define ARTSCRIPT_INTERFACES__MSG__DETAIL__INFRARED_STRAIN__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "artscript_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "artscript_interfaces/msg/detail/infrared_strain__struct.h"

/// Initialize msg/InfraredStrain message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * artscript_interfaces__msg__InfraredStrain
 * )) before or use
 * artscript_interfaces__msg__InfraredStrain__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_artscript_interfaces
bool
artscript_interfaces__msg__InfraredStrain__init(artscript_interfaces__msg__InfraredStrain * msg);

/// Finalize msg/InfraredStrain message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_artscript_interfaces
void
artscript_interfaces__msg__InfraredStrain__fini(artscript_interfaces__msg__InfraredStrain * msg);

/// Create msg/InfraredStrain message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * artscript_interfaces__msg__InfraredStrain__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_artscript_interfaces
artscript_interfaces__msg__InfraredStrain *
artscript_interfaces__msg__InfraredStrain__create();

/// Destroy msg/InfraredStrain message.
/**
 * It calls
 * artscript_interfaces__msg__InfraredStrain__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_artscript_interfaces
void
artscript_interfaces__msg__InfraredStrain__destroy(artscript_interfaces__msg__InfraredStrain * msg);


/// Initialize array of msg/InfraredStrain messages.
/**
 * It allocates the memory for the number of elements and calls
 * artscript_interfaces__msg__InfraredStrain__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_artscript_interfaces
bool
artscript_interfaces__msg__InfraredStrain__Sequence__init(artscript_interfaces__msg__InfraredStrain__Sequence * array, size_t size);

/// Finalize array of msg/InfraredStrain messages.
/**
 * It calls
 * artscript_interfaces__msg__InfraredStrain__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_artscript_interfaces
void
artscript_interfaces__msg__InfraredStrain__Sequence__fini(artscript_interfaces__msg__InfraredStrain__Sequence * array);

/// Create array of msg/InfraredStrain messages.
/**
 * It allocates the memory for the array and calls
 * artscript_interfaces__msg__InfraredStrain__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_artscript_interfaces
artscript_interfaces__msg__InfraredStrain__Sequence *
artscript_interfaces__msg__InfraredStrain__Sequence__create(size_t size);

/// Destroy array of msg/InfraredStrain messages.
/**
 * It calls
 * artscript_interfaces__msg__InfraredStrain__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_artscript_interfaces
void
artscript_interfaces__msg__InfraredStrain__Sequence__destroy(artscript_interfaces__msg__InfraredStrain__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // ARTSCRIPT_INTERFACES__MSG__DETAIL__INFRARED_STRAIN__FUNCTIONS_H_
