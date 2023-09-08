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
	int i;
	for (i=1; i < 20; i++)
		putchar(alphabet[i]);
	putchar('\n');
	return (0);
}
