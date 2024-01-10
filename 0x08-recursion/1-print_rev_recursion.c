#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse to stdout using recursion.
 * @s: The string to be printed in reverse.
 *
 * Description: This function prints a string in reverse to stdout
 *              using recursion.
 *              It iterates through the characters in the string until
 *              it reaches the first element.
 *
 * Return: No return value (void).
 */
void _print_rev_recursion(char *s)
{
	/* base condtion if we are in the null terminator or first element*/
	if (*s == 0 || *s == '\0')
	{
		return;/*stop the program*/
		_putchar('\n');/*add a new line*/
	}

	_print_rev_recursion(s + 1);/*recursive call*/
	_putchar(*s);/*print the current character*/
}
