#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char alpha[] = "abcdef";

	for (i = 0 ; i < 10 ; i++)
	{
		printf("%d", i);
	}
	for (i = 0 ; i < 6 ; i++)
	{
		putchar(alpha[i]);
	}

	putchar('\n');
	return (0);
}
