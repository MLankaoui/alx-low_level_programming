#include "variadic_functions.h"

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