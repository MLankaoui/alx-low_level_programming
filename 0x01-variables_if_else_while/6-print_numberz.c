#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0123;
	int i;

	for (i = 0; i < 8; i++)
	{
		putchar(n);
	}

	putchar('\n');
	return (0);
}
