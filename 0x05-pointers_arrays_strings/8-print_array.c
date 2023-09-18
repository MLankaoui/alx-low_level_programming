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
	for (n = 0 ; n < 5 ; n++)
	{
		printf("%d", a[n]);
		if (n  != n % 10)
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
