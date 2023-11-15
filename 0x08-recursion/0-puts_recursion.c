#include "main.h"

/**
* _puts_recursion - Prints a string recursively, followed by a new line
* @s: The string to be printed
*
* Description: This function prints each character of the string 's'
* recursively until the null terminator '\0' is reached.
*/
void _puts_recursion(char *s)
{

	/* Base condition for the recursive function */
	if (*s != '\0')
	{
		/*
	* Print the current character of the string.
	* Then, make a recursive call to print the rest of the string.
	*/
	_putchar(*s);
	_puts_recursion(s + 1);
	}
}
