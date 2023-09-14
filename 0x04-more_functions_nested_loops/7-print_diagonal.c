#include "main.h"

/**
 * print_digonal - is a function prints \
 */
void print_diagonal(int n)
{
	if (!(n <= 0))
	{
		int i;

		for (i = 0 ; i <= n ; i++)
		{
			_putchar('\\');
		}
	}
	else
	{
		_putchar('\n');
	}
}
