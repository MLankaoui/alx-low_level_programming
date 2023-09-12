#include "main.h"
/**
 *print_alphabet_x10 - Entry point
 *Return: 0
 */

void print_alphabet_x10(void)
{
	int x;
	char c;

	x = 0;

	while (x < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}

		_putchar('\n');
		x++;
	}
}