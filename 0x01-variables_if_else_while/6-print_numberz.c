#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 1234567;
	int i;

	int zero = 0;

	putchar(zero);
	for (i = 0; i < 7; i++)
	{
		putchar(n);
	}

	putchar('\n');
	return (0);
}
