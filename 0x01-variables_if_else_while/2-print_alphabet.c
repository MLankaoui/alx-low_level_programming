#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet[30] = "abcdefghijklmnopqrstuvwxyz";

	for(int i = 0;alphabet != "\0";i++)
		putchar(alphabet[i]);
	
	putchar("\n");
	return (0);
}
