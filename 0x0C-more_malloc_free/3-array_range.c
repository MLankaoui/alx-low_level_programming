#include "main.h"

/**
 * array_range - Create an array of integers in a given range.
 * @min: The minimum value of the range.
 * @max: The maximum value of the range.
 *
 * Return: A pointer to the newly created array, or NULL on failure.
 */
int *array_range(int min, int max)
{
	int *ptr;

	int i;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc((max - min + 1) * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = min ; i <= max ; i++)
	{
		ptr[i - min] = i;
	}

	return (ptr);
}
