#include "function_pointers.h"

void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
