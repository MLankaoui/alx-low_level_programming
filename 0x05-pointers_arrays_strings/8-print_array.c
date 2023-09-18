#include "main.h"
#include <stdio.h>

/**
* print_array - prints n elements of an array of integers
* @a: the array to print
* @n: the number of elements to print
*
* Description: prints n elements of an integer array,
* separated by commas and followed by a new line.
*/
void print_array(int *a, int n)
{
	if (n <= 0)
	{
		putchar('\n');
		return;
	}

	printf("%d", a[0])

	for (int i = 1; i < n; i++)

	{
		printf(", %d", a[i]);
	}

	putchar('\n');
}
