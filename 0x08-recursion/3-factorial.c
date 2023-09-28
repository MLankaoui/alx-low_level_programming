#include "main.h"

/**
* factorial - Calculates the factorial of a number.
* @n: The number for which to calculate the factorial.
*
* Return: The factorial of n, or -1 if n is negative.
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
