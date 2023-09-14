#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

void more_numbers(void)
{
    int i, j;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j <= 14; j++)
        {
            if (j >= 10)
                _putchar((j / 10) + '0');
            _putchar((j % 10) + '0');
        }
    }
}
