#include "main.h"

/**
 * create_array - Allocates memory for an array and initializes it with a
 * specific character.
 * @size: The size of the array.
 * @c: The character to initialize the array with.
 *
 * Return: If size is 0 or if memory allocation fails, returns NULL;
 * otherwise, returns a pointer to the allocated memory.
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;

	unsigned int i;


	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0 ; i < size ; i++)
		{
			ptr[i] = c;
		}

		return (ptr);
	}
}
