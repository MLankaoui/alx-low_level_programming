#include "main.h"
/**
* is_prime_number - Checks if a number is a prime number
* @n: The number to be checked
*
* Description: This function checks whether the given integer 'n' is a prime
* number or not.
*
* Return: 1 if 'n' is a prime number, 0 otherwise.
*/
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % 1 == 0 && n % n == 0)
	{
		return (1);
	}

	else if (n % 1 != 0 || n % n != 0)
	{
		return (0);
	}
}
