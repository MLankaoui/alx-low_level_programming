#include "main.h"

/**
 * _pow_recursion - Computes the power of a number
 * @x: The base
 * @y: The exponent
 *
 * Description: This function calculates x raised to the power of y.
 *
 * Return: The result of x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
	/* Base cases */
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1); /* Error: undefined for negative exponents */
	}

	/* Recursive case */
	return (x * _pow_recursion(x, y - 1));
}
