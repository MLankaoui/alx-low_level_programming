#include "main.h"

/**
 * print_digonal - is a function prints \
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;
		int j;
	
		for (i = 0 ; i <= n ; i++)
		{
			for (j = 0 ; j <= n ; j++)
			{
				_putchar(' ');

			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
