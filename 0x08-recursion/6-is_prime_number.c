#include "main.h"

/**
 * is_prime - Check if a number is prime recursively.
 * @n: The number to check.
 * @divisor: The current divisor being checked.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime(int n, int divisor)
{
	/* Negative numbers and 0 are not prime numbers */
	if (n <= 1)
	{
		return (0);
	}

	/* 1 is a prime number */
	if (divisor == 1)
	{
		return (1);
	}

	/* Check if n is divisible by the current divisor */
	if (n % divisor == 0)
	{
		return (0);
	}

	/* Recursively check for the next divisor */
	return (is_prime(n, divisor - 1));
}

/**
 * is_prime_number - Check if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	return (is_prime(n, n - 1));
}
