#include "main.h"


/**
* _sqrt - Returns the natural square root of a number.
* @n: The number to calculate the square root of.
* @m: The current square value to check.
*
* Return: The square root of n if it exists, -1 otherwise.
*/
int _sqrt(int n, int m)
{
	if (n < 0 || m * m > n)
	{
		return (-1);
	}
	if (m * m == n)
	{
		return (m);
	}
	else
	{
		return (_sqrt(n, m + 1));
	}
}

/**
* _sqrt_recursion - Returns the natural square root of a number.
* @n: The number to calculate the square root of.
*
* Return: The natural square root of n if it exists, -1 otherwise.
*/
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 0));
}
