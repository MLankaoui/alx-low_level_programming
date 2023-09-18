#include "main.h"

/**
 * _atoi - Convert a string to an integer
 * @s: The string to convert
 *
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
    int nb;
    int sign;   // Initialize the sign variable (positive by default)
    nb = 0;
    sign = 1;
    while (*s)
    {
        if (*s == '-')
        {
            sign *= -1; // Handle negative sign
        }
        else if (*s >= '0' && *s <= '9')
        {
            nb = nb * 10 + sign * (*s - '0');
        }
        else if (nb != 0)
        {
            // If non-digit characters follow valid digits, break
            break;
        }
        s++;
    }

    return (nb);
}
