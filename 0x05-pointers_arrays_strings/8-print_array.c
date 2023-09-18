#include "main.h"

/**
*print_array - just prints an array
*@a:takes the value of arrays
*@n:just a value
*Description: prints an array
*/
void print_array(int *a, int n)
{
	for ( n = 0 ; n < strlen(a) ; n++)
    {
		printf("%d", *a[n]);
	    if (a[n] != -1024)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar('\n');
		}
    }
}