#include "main.h"
/**
 * _pow_recursion - Calculates the power of a number using recursion.
 * @x: The base number.
 * @y: The exponent.
 *
 * Description: This function calculates the power of a number using recursion.
 *              If the exponent is negative, the function returns -1.
 *              If the base is 0, the result is 0.
 *              If the exponent is 0, the result is 1.
 *              If the base is 1 or the exponent is 1, the result is the base.
 *              Otherwise, the function recursively calculates x^y as
 *				x * x^(y-1).
 *
 * Return: The result of x raised to the power of y.
 *         Returns -1 for a negative exponent.
 */
int _pow_recursion(int x, int y)
{
	/*return an erro is y is negative*/
	if (y < 0)
	{
		return (-1);
	}
	/* 1 raised to the power of any number is 1 and any number*/
    /*raised to the power of 0 is 1**/
	if (x == 1 || y == 0)
	{
		/*return the number 1*/
		return (1);
	}
	/*0 to the power of any number is 0*/
	if (x == 0)
	{
		return (0);
	}
	/* any number to the power of 1 is the number it self */
	if (y == 1)
	{
		return (x);
	}

	/* recursive call */
	return (x * _pow_recursion(x, y - 1));
}

