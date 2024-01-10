#include "main.h"
/**
 * _strlen_recursion - Calculates the length of a string using recursion.
 * @s: The string for which to calculate the length.
 *
 * Description: This function calculates the length of a string using recursion
 *              It iterates through the characters in the string until
 *              it reaches the null terminator, adding one for each character.
 *
 * Return: The length of the string. Returns 0 if the string is empty.
 */
int _strlen_recursion(char *s)
{
	/*base condtion once we are in the null terminator*/
	if (*s == '\0')
	{
		/*the length here is going to be 0 in this particular case*/
		return (0);
	}
	/*recursive call*/
	return (1 + _strlen_recursion(s + 1));
}
