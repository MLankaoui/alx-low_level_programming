#include "main.h"

/*
 * print_line - print _ n times
 *
 * @n: just argment that takes the number of _
 */
void print_line(int n)
{
	if (!(n <= 0))
	{
		int i;

		for (i = 0 ; i < n ; n++)
			_putchar('_');
	}
	else
	{
		_putchar('\n');
	}
}
