#include "main.h"

/**
 * print_numbers - Prints numbers from 0 to 9 followed by a dollar sign.
 */
void print_numbers(void)
{
    int num = 0;

    do
    {
        if (num != 9)
        {
            _putchar(num + '0');
            num++;
        }
        else
        {
            _putchar(num + '0');
            _putchar('$');
            num++;
        }
    }
    while (num <= 9);
}