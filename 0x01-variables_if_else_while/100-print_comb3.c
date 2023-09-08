#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{	
	int i, last;

	last = 98;
	for (i = 0 ; i < 88 ; i++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}
	puthchar(last + '0');
	return (0);
}
