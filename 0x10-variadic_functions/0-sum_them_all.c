#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of arguments
 * @n: represents the number of arguments
 *
 * Description: This function returns the sum of its variable number of
 * arguments.
 *
 * Return: Sum of arguments.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	unsigned int i;

	int sum;

	/* it means that if the argument counter is 0 (0 arguments)*/
	if (n == 0)
	{
		return (0);
	}

	else
	{
		sum = 0;

		va_start(args, n);

		i = 0;

		while (i < n)
		{
			sum += va_arg(args, int);
			i++;
		}


	}
	va_end(args);

	return (sum);
}
