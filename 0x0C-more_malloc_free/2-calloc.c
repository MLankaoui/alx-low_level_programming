#include "main.h"

/**
 * _calloc - Allocates memory for an array, initializing it with zero.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element.
 *
 * Return: If nmemb or size is 0, or if malloc fails, returns NULL.
 *         Otherwise, returns a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr, i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb; i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}
