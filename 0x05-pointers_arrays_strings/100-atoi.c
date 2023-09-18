#include "main.h"

/**
 * _atoi - Convert a string to an integer
 * @s: The string to convert
 *
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
    int result = 0; // Initialize the result variable
    int sign = 1;   // Initialize the sign variable (positive by default)
    int digit;      // Variable to store each digit

    while (*s)
    {
        if (*s == '-')
        {
            sign *= -1; // Handle negative sign
        }
        else if (*s >= '0' && *s <= '9')
        {
            // Convert character to integer and add to result
            digit = *s - '0';
            result = result * 10 + sign * digit;
        }
        else if (result != 0)
        {
            // If non-digit characters follow valid digits, break
            break;
        }
        s++;
    }

    return result;
}
