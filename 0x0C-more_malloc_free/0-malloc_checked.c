#include <stdio.h>
/**
 * description : function that allocate memory using malloc
 * 
 * malloc_checker - function that allocate memory using malloc
 * @b : takes a unsigned int from main function as a parameter
 * return : nothing
 */
void *malloc_checked(unsigned int b)
{
	int* c = (int*)malloc(size * sizeof(int));

	if (b == NULL)
	{
		exit(98);
	}

	return (c);
}