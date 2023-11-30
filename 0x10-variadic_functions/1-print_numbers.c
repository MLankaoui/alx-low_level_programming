#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers followed by a separator
 * @separator: The string to be printed between numbers
 * @n: The number of integers to be printed
 * @...: Variable number of integers to be printed
 *
 * Description: This function prints a variable number of integers separated
 * by a specified string. If the separator is NULL or n is 0, the function
 * does nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int x;

	va_start(args, n);

	if (separator == NULL || n == 0)
	{
		va_end(args);
		return;
	}
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		printf("%d", x);

		if (i < n - 1)
			printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}
