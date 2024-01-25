#include "variadic_functions.h"

/**
* print_strings - Prints strings followed by a separator.
* @separator: The string to be printed between strings.
* @n: The number of parameters.
* @...: Variable number of strings to be printed.
*
* Description: Prints the strings followed by the separator.
* If a string is NULL, it prints "(nil)" instead.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *x;

	va_list args;

	va_start(args, n);

	if (separator == NULL || n == 0)
		return;

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, char*);

		if (x == NULL)
		{
			printf("(nil)");
		}

		else if (i < n - 1)
		{
			printf("%s%s", x, separator);
		}
		else if (i == n - 1)
		{
			printf("%s", x);
		}
	}
	printf("\n");
}
