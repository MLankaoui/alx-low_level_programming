#include "main.h"

/*
 * print_line - print _ n times
 *
 * @n: just argment that takes the number of _
 */
void print_line(int n)
{
	for (i = 0 ; i <= n ; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar(n + '0');
		}
	}
}
