#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, n[16], m[4], v[9], N[16];

	n = "01, 02, 03, 04, 05, 06, 07, 08, 09, 12, 13, 14, 15, 16, 17, 18";
	m = "19, 23, 24, 25";
	N = "26, 27, 28, 29, 34, 35, 36, 37, 38, 39, 45, 46, 47, 48, 49, 56";
	v = "57, 58, 59, 67, 68, 69, 78, 79, 89";

	for (i = 1 ; i < 16 ; i++)
	{
		putchar(n + '0');
	}
	for (i = 1 ; i < 4 ; i++)
	{
		putchar(m + '0');
	}
	for (i = 1 ; i < 16 ; i++)
	{
		putchar(N + '0');
	}
	for (i = 1 ; i < 9 ; i++)
	{
		putchar(v + '0');
	}
	putchar('\n');
	return (0);
}
