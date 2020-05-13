// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dome_interfaces:srv/Dome.idl
// generated code does not contain a copyright notice

#ifndef DOME_INTERFACES__SRV__DOME__FUNCTIONS_H_
#define DOME_INTERFACES__SRV__DOME__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "dome_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "dome_interfaces/srv/dome__struct.h"

/// Initialize srv/Dome message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * dome_interfaces__srv__Dome_Request
 * )) before or use
 * dome_interfaces__srv__Dome_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_dome_interfaces
bool
dome_interfaces__srv__Dome_Request__init(dome_interfaces__srv__Dome_Request * msg);

/// Finalize srv/Dome message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dome_interfaces
void
dome_interfaces__srv__Dome_Request__fini(dome_interfaces__srv__Dome_Request * msg);

/// Create srv/Dome message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * dome_interfaces__srv__Dome_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dome_interfaces
dome_interfaces__srv__Dome_Request *
dome_interfaces__srv__Dome_Request__create();

/// Destroy srv/Dome message.
/**
 * It calls
 * dome_interfaces__srv__Dome_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dome_interfaces
void
dome_interfaces__srv__Dome_Request__destroy(dome_interfaces__srv__Dome_Request * msg);


/// Initialize array of srv/Dome messages.
/**
 * It allocates the memory for the number of elements and calls
 * dome_interfaces__srv__Dome_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_dome_interfaces
bool
dome_interfaces__srv__Dome_Request__Sequence__init(dome_interfaces__srv__Dome_Request__Sequence * array, size_t size);

/// Finalize array of srv/Dome messages.
/**
 * It calls
 * dome_interfaces__srv__Dome_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dome_interfaces
void
dome_interfaces__srv__Dome_Request__Sequence__fini(dome_interfaces__srv__Dome_Request__Sequence * array);

/// Create array of srv/Dome messages.
/**
 * It allocates the memory for the array and calls
 * dome_interfaces__srv__Dome_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dome_interfaces
dome_interfaces__srv__Dome_Request__Sequence *
dome_interfaces__srv__Dome_Request__Sequence__create(size_t size);

/// Destroy array of srv/Dome messages.
/**
 * It calls
 * dome_interfaces__srv__Dome_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dome_interfaces
void
dome_interfaces__srv__Dome_Request__Sequence__destroy(dome_interfaces__srv__Dome_Request__Sequence * array);

/// Initialize srv/Dome message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * dome_interfaces__srv__Dome_Response
 * )) before or use
 * dome_interfaces__srv__Dome_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_dome_interfaces
bool
dome_interfaces__srv__Dome_Response__init(dome_interfaces__srv__Dome_Response * msg);

/// Finalize srv/Dome message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dome_interfaces
void
dome_interfaces__srv__Dome_Response__fini(dome_interfaces__srv__Dome_Response * msg);

/// Create srv/Dome message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * dome_interfaces__srv__Dome_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dome_interfaces
dome_interfaces__srv__Dome_Response *
dome_interfaces__srv__Dome_Response__create();

/// Destroy srv/Dome message.
/**
 * It calls
 * dome_interfaces__srv__Dome_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dome_interfaces
void
dome_interfaces__srv__Dome_Response__destroy(dome_interfaces__srv__Dome_Response * msg);


/// Initialize array of srv/Dome messages.
/**
 * It allocates the memory for the number of elements and calls
 * dome_interfaces__srv__Dome_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_dome_interfaces
bool
dome_interfaces__srv__Dome_Response__Sequence__init(dome_interfaces__srv__Dome_Response__Sequence * array, size_t size);

/// Finalize array of srv/Dome messages.
/**
 * It calls
 * dome_interfaces__srv__Dome_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dome_interfaces
void
dome_interfaces__srv__Dome_Response__Sequence__fini(dome_interfaces__srv__Dome_Response__Sequence * array);

/// Create array of srv/Dome messages.
/**
 * It allocates the memory for the array and calls
 * dome_interfaces__srv__Dome_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dome_interfaces
dome_interfaces__srv__Dome_Response__Sequence *
dome_interfaces__srv__Dome_Response__Sequence__create(size_t size);

/// Destroy array of srv/Dome messages.
/**
 * It calls
 * dome_interfaces__srv__Dome_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dome_interfaces
void
dome_interfaces__srv__Dome_Response__Sequence__destroy(dome_interfaces__srv__Dome_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // DOME_INTERFACES__SRV__DOME__FUNCTIONS_H_
