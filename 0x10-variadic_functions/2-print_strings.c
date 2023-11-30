#include "variadic_functions.h"

/**
 * print_strings - Prints strings followed by a separator
 * @separator: The string to be printed between strings
 * @n: The number of strings to be printed
 * @...: Variable number of strings to be printed
 *
 * Description: This function prints a variable number of strings separated
 * by a specified string. If the separator is NULL or n is 0, the function
 * does nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	const char *str;

	va_start(args, n);

	if (separator == NULL || n == 0)
	{
		va_end(args);
		return;
	}

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, const char *);
		printf("%s", str);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}
