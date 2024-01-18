#include "main.h"

/**
 * _realloc - Reallocate memory block using malloc and free
 * @ptr: Pointer to the memory previously allocated with malloc(old_size)
 * @old_size: Size of the allocated space for ptr
 * @new_size: New size in bytes to reallocate
 *
 * Return: If new_size == old_size, return ptr.
 *         If new_size == 0 and ptr is not NULL, free memory and return NULL.
 *         Otherwise, return a pointer to the newly allocated memory.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{


	if (new_size > old_size)
	{
		void *new_ptr = malloc(new_size);

		if (new_ptr == NULL)
		{
			return (NULL);
		}
		memcpy(new_ptr, ptr, old_size);
		free(ptr);
		return (new_ptr);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
	}

	if (ptr == NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	return (ptr);
}
