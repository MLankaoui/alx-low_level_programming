#include "main.h"

/**
 * print_digonal - is a function prints \
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		int i;

		for (i = 0 ; i <= n ; i++)
		{
			for (j = 0 ; j < i ; j++)
				_putchar(' ');

			_putchar('\\');
			_putchar('\n');
		}

	}
}
