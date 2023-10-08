#include "main.h"

/**
* malloc_checked - Allocates memory using malloc
* @b: The number of bytes to allocate
*
* Return: A pointer to the allocated memory
*         If malloc fails, it terminates the program with status 98
*/
void *malloc_checked(unsigned int b)
{
	void *ptr_b;

	*ptr_b = malloc(b);

	if (ptr_b == NULL)
	{
		exit(98);
	}

	return (ptr_b);
}
