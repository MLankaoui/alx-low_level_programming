#include "main.h"

/**
 * print_numbers - Prints numbers from 0 to 9 followed by a dollar sign.
 */
void print_numbers(void)
{
    int num = 0;

    do
    {
        _putchar(num + '0');

        if (num == 9)
        {
            _putchar('$');
        }

        num++;
    } while (num <= 9);
}