#include "main.h"

/**
 * factorial - Computes the factorial of a given number
 * @n: The number for which factorial is to be computed
 *
 * Description: This function calculates the factorial of a non-negative
 * integer 'n' using recursive approach.
 *
 * Return: The factorial of 'n'. If 'n' is less than 0, returns -1 as an error.
 */
int factorial(int n)
{
	/*if the number is < 0 return an error*/
	if (n < 0)
	{
		return (-1);/*return an error*/
	}
	/*factorial of 0 is 0! = 1 and 1! = 1*/
	if (n == 0 || n == 1)
	{
		return (1);/*return 1 becasue*/
	}
	/*5! = 5 * 4 * 3 * 2 * 1 */
	/*5! = 5 * 4 * 3 * 2!*/
	/*5! = 5 * 4 * 3!*/
	/*5! = 5 * 4!*/
	/*factorial(5) = 5 * factorial(4) */
	/*factorial(n) = n * factorial(n - 1)*/

	return (n * factorial(n - 1));
}
