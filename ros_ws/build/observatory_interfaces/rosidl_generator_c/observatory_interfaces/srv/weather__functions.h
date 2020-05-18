// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from observatory_interfaces:srv/Weather.idl
// generated code does not contain a copyright notice

#ifndef OBSERVATORY_INTERFACES__SRV__WEATHER__FUNCTIONS_H_
#define OBSERVATORY_INTERFACES__SRV__WEATHER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "observatory_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "observatory_interfaces/srv/weather__struct.h"

/// Initialize srv/Weather message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * observatory_interfaces__srv__Weather_Request
 * )) before or use
 * observatory_interfaces__srv__Weather_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_observatory_interfaces
bool
observatory_interfaces__srv__Weather_Request__init(observatory_interfaces__srv__Weather_Request * msg);

/// Finalize srv/Weather message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_observatory_interfaces
void
observatory_interfaces__srv__Weather_Request__fini(observatory_interfaces__srv__Weather_Request * msg);

/// Create srv/Weather message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * observatory_interfaces__srv__Weather_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_observatory_interfaces
observatory_interfaces__srv__Weather_Request *
observatory_interfaces__srv__Weather_Request__create();

/// Destroy srv/Weather message.
/**
 * It calls
 * observatory_interfaces__srv__Weather_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_observatory_interfaces
void
observatory_interfaces__srv__Weather_Request__destroy(observatory_interfaces__srv__Weather_Request * msg);


/// Initialize array of srv/Weather messages.
/**
 * It allocates the memory for the number of elements and calls
 * observatory_interfaces__srv__Weather_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_observatory_interfaces
bool
observatory_interfaces__srv__Weather_Request__Sequence__init(observatory_interfaces__srv__Weather_Request__Sequence * array, size_t size);

/// Finalize array of srv/Weather messages.
/**
 * It calls
 * observatory_interfaces__srv__Weather_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_observatory_interfaces
void
observatory_interfaces__srv__Weather_Request__Sequence__fini(observatory_interfaces__srv__Weather_Request__Sequence * array);

/// Create array of srv/Weather messages.
/**
 * It allocates the memory for the array and calls
 * observatory_interfaces__srv__Weather_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_observatory_interfaces
observatory_interfaces__srv__Weather_Request__Sequence *
observatory_interfaces__srv__Weather_Request__Sequence__create(size_t size);

/// Destroy array of srv/Weather messages.
/**
 * It calls
 * observatory_interfaces__srv__Weather_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_observatory_interfaces
void
observatory_interfaces__srv__Weather_Request__Sequence__destroy(observatory_interfaces__srv__Weather_Request__Sequence * array);

/// Initialize srv/Weather message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * observatory_interfaces__srv__Weather_Response
 * )) before or use
 * observatory_interfaces__srv__Weather_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_observatory_interfaces
bool
observatory_interfaces__srv__Weather_Response__init(observatory_interfaces__srv__Weather_Response * msg);

/// Finalize srv/Weather message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_observatory_interfaces
void
observatory_interfaces__srv__Weather_Response__fini(observatory_interfaces__srv__Weather_Response * msg);

/// Create srv/Weather message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * observatory_interfaces__srv__Weather_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_observatory_interfaces
observatory_interfaces__srv__Weather_Response *
observatory_interfaces__srv__Weather_Response__create();

/// Destroy srv/Weather message.
/**
 * It calls
 * observatory_interfaces__srv__Weather_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_observatory_interfaces
void
observatory_interfaces__srv__Weather_Response__destroy(observatory_interfaces__srv__Weather_Response * msg);


/// Initialize array of srv/Weather messages.
/**
 * It allocates the memory for the number of elements and calls
 * observatory_interfaces__srv__Weather_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_observatory_interfaces
bool
observatory_interfaces__srv__Weather_Response__Sequence__init(observatory_interfaces__srv__Weather_Response__Sequence * array, size_t size);

/// Finalize array of srv/Weather messages.
/**
 * It calls
 * observatory_interfaces__srv__Weather_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_observatory_interfaces
void
observatory_interfaces__srv__Weather_Response__Sequence__fini(observatory_interfaces__srv__Weather_Response__Sequence * array);

/// Create array of srv/Weather messages.
/**
 * It allocates the memory for the array and calls
 * observatory_interfaces__srv__Weather_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_observatory_interfaces
observatory_interfaces__srv__Weather_Response__Sequence *
observatory_interfaces__srv__Weather_Response__Sequence__create(size_t size);

/// Destroy array of srv/Weather messages.
/**
 * It calls
 * observatory_interfaces__srv__Weather_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_observatory_interfaces
void
observatory_interfaces__srv__Weather_Response__Sequence__destroy(observatory_interfaces__srv__Weather_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // OBSERVATORY_INTERFACES__SRV__WEATHER__FUNCTIONS_H_
