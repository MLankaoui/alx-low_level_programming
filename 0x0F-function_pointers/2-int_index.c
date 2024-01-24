#include "function_pointers.h"

/**
* int_index - searches for an integer in an array using a
* given comparison
* function.
* @array: pointer to the array to search.
* @size: size of the array.
* @cmp: pointer to the comparison function.
*
* Return: index of the first element for which the comparison
* function
* returns true, or -1 if no element matches or on error.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1); /* Return -1 for invalid inputs */

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i); /* Return the index where cmp is true */
	}

	return (-1); /* Return -1 if no match is found */
}

