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

	for (int i = 0; i < 26 ; i++)
	{
		putchar(alphabet[i]);
	}
	for (int i = 0; i < 26; i++)
	{
		putchar(ALPHABET[i]);
	}
	return (0);
}
