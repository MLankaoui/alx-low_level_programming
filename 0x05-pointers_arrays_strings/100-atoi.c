#include "main.h"
#include <ctype.h>

int _atoi(char *s)
{
    int result = 0; // Initialize the result variable
    int sign = 1;   // Initialize the sign variable (positive by default)

    // Skip leading whitespace characters
    while (*s == ' ' || (*s >= '\t' && *s <= '\r')) {
        s++;
    }

    // Check for an optional sign
    if (*s == '-' || *s == '+') {
        if (*s == '-') {
            sign = -1; // Negative sign
        }
        s++;
    }

    // Process digits to build the result
    while (*s >= '0' && *s <= '9') {
        result = result * 10 + (*s - '0');
        s++;
    }

    // Apply the sign
    return result * sign;
}

