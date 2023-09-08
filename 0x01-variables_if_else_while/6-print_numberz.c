#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, N, i;

	n = 01234;
	N = 56789;

	for (i = 0 ; i < 5 ; i++)
	{
		putchar(n + 'O');
	}
	for (i = 0 ; i < 5 ; i++)
	{
		putchar(N + 'O');
	}
	putchar('\n');
	return (0);
}
