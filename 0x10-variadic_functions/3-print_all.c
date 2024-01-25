#include "variadic_functions.h"

void print_all(const char * const format, ...)
{
    int i = 0;
    char c;
    int d;
    float f;
    char *s;

    va_list args;
    va_start(args, format);

    while (format && format[i])
    {
        switch (format[i])
        {
        case 'c':
            c = va_arg(args, int);
            printf("%c", c);
            break;

        case 'i':
            d = va_arg(args, int);
            printf("%d", d);
            break;

        case 'f':
            f = va_arg(args, double);  /* float is promoted to double in varargs*/
            printf("%f", f);
            break;

        case 's':
            s = va_arg(args, char*);
            if (s == NULL)
                printf("(nil)");
            else
                printf("%s", s);
            break;

        default:
            break;
        }

        if (format[i + 1] && (format[i + 1] == 'c' || format[i + 1] == 'i' || format[i + 1] == 'f' || format[i + 1] == 's'))
            printf(", ");

        i++;
    }

    va_end(args);
    printf("\n");
}
