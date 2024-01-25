#include "variadic_functions.h"

/**
* sum_them_all - Sums all its parameters.
* @n: The number of parameters.
* @...: Variable number of arguments to be summed.
*
* Return: The sum of all parameters.
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, r, x;

	va_list args;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}

	r = 0;

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		r += x;
	}

	va_end(args);
	return (r);
}
