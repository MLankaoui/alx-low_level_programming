#include "main.h"

/**
 * _putchar - Writes a character to standard output.
 * @c: The character to be written.
 *
 * Return: On success, returns the character written; on error, returns -1.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

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