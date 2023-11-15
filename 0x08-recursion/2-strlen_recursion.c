#include "main.h"

/**
* _strlen_recursion - Returns the length of a string recursively
* @s: The string to find the length of
*
* Description: This function calculates the length of the string 's'
* recursively until the null terminator '\0' is reached.
*
* Return: The length of the string.
*/
int _strlen_recursion(char *s)
{
	/* Base case: reached the end of the string */
	if (*s == '\0')
	{
		return (0);
	}

	/* Recursive case: move to the next character and increment length */
	return (1 + _strlen_recursion(s + 1));
}

