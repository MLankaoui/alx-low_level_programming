#include "main.h"

/**
 * _puts_recursion - Prints a string to stdout using recursion.
 * @s: The string to be printed.
 *
 * Description: This function prints a string to stdout using recursion.
 *              It iterates through the characters in the string until
 *              it reaches the null terminator.
 *
 * Return: No return value (void).
 */
void _puts_recursion(char *s)
{
	/*tha base condition that going to stop the recursion*/
	/* if we are in the null value wich is the last element of a string*/
	if (*s == '\0')
	{
		/*when the null terminator is reach add a new line*/
		_putchar('\n');
		/* stop the program */
		return;
	}
	_putchar(*s);/*print the current character*/
	_puts_recursion(s + 1);/*recursive call*/
}
