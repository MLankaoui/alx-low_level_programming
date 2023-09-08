#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    	int n[] = "123456789";
	int i;

	for(i = 0;n[i] != "\0"; i++)
		putchar(n[i]);

	putchar("\n");
	return (0);
}
