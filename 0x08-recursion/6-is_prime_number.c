#include "main.h"

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number for which to calculate the square root.
 *
 * Return: The natural square root of n, or -1 if it does not have one.
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
    {
        return -1; // Negative numbers don't have a natural square root
    }

    return _sqrt_helper(n, 0); // Call the helper function with initial guess 0
}

/**
 * _sqrt_helper - Helper function to calculate square root recursively.
 * @n: The number for which to calculate the square root.
 * @guess: The current guess for the square root.
 *
 * Return: The natural square root of n, or -1 if it does not have one.
 */
int _sqrt_helper(int n, int guess)
{
    if (guess * guess == n)
    {
        return guess; // Found the square root
    }
    else if (guess * guess > n)
    {
        return -1; // n doesn't have a natural square root
    }

    return _sqrt_helper(n, guess + 1); // Try the next guess
}
