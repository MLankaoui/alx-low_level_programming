#include "main.h"
#include <stdbool.h>

/**
*print_array - just prints an array
*@a:takes the value of arrays
*@n:just a value
*Description: prints an array
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar('\n');
		}
	}
	putchar('\n');

}
