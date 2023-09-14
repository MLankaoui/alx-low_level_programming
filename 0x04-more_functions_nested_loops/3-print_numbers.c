#include "main.h"


/**
 * print_numbers - Prints numbers from 0 to 9 followed by a dollar sign.
 */
void print_numbers(void)
{
    int num = 0;

    do
    {
    	num++;

        if (num == 9)
        {
            _putchar(num + '0');
            _putchar('$');
        }
    } 
    while (num <= 9);
}