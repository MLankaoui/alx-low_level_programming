#include "main.h"

/**
* _print_rev_recursion - Prints a string in reverse recursively
* @s: The string to be printed in reverse
*
* Description: This function prints each character of the string 's'
* in reverse recursively until the null terminator '\0' is reached.
*/
void _print_rev_recursion(char *s)
{
	/* Base condition for the recursive function */
	if (*s == '\0')
	{
		return;
	}

	/*
	* Make a recursive call to print the rest of the string in reverse.
	* Then, print the current character of the string.
	*/
	_print_rev_recursion(s + 1);
	_putchar(*s);
}

