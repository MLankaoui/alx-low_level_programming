#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; alphabet != "\0"; i++)
		putchar(alphabet[i]);
	putchar('\n');
	return (0);
}
