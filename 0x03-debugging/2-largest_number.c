#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a - b > 0 && b - c < 0)
	{
		largest = a;
	}
	else if (b - a > 0  && a - c > 0)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}
