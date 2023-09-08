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
	char ALPHABET[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 26 ; i++)
	{
		putchar(alphabet[i]);
	}
	for (i = 0; i < 26; i++)
	{
		putchar(ALPHABET[i]);
	}
	putchar('\n');
	return (0);
}
