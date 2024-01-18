#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 * @b: The number of bytes to allocate
 *
 * Return: A pointer to the allocated memory
 *         Exits with status 98 if malloc fails
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(sizeof(unsigned int) * b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
	free(ptr);
}
