#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha[] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24 ; i++)
	{
		putchar(alpha[i]);
	}
	putchar('\n');
	return (0);
}
