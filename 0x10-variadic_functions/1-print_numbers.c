#include "variadic_functions.h"

/**
* print_numbers - Prints numbers followed by a separator.
* @separator: The string to be printed between numbers.
* @n: The number of parameters.
* @...: Variable number of integers to be printed.
*
* Description: Prints the numbers followed by the separator.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, x;

	va_list args;

	va_start(args, n);

	if (separator == NULL || n == 0)
		return;

	for (i = 0 ; i < n ; i++)
	{
		x = va_arg(args, int);

		if (i < n - 1)
			printf("%d%s", x, separator);

		else
			printf("%d", x);
	}
	printf("\n");
}
