#include "main.h"

/**
 * print_line - prints new line when run
 * @n: number of lines printed in _ char
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar ('_');
		}
		_putchar ('\n');
	}
}
