#include "main.h"

/**
* factorial - Calculates the factorial of a number using recursion.
* @n: The number for which to calculate the factorial.
*
* Description: This function calculates the factorial of a given number
*              using recursion.
*              The factorial of 0 and 1 is 1.
*              For any other positive integer n,
*              factorial(n) = n * factorial(n - 1).
*
* Return: The factorial of the given number.
*         Returns 1 for n = 0 or n = 1.
*         Returns -1 for n < 0.
*/
int factorial(int n)
{
	/*if the number is negative return an error*/
	if (n < 0)
	{
		/*returns an error*/
		return (-1);
	}
	/*base condtion we know that factorial(0) and 1 is 1*/
	if (n == 0 || n == 1)
	{
		/*factorial(1) and factorial(0) are 1*/
		return (1);
	}
	/*recursive call 5! = 5 * 4!*/
	return (n * factorial(n - 1));
}
