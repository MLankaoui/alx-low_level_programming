#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, k;

	for (i = 0; i < 10 ; i++)
	{
		for (k = 0 ; k < 10 ; k++)
		{
			putchar(i + '0');
			putchar(k + '0');
			if (i != 8 || k != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
