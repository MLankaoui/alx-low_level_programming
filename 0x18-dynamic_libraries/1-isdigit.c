#include <ctype.h>
#include "main.h"

/**
 * _isdigit - checks if the element is a digit (0 through 9)
 * @c: the character to be checked
 *
 * Description: This function checks if the provided character is a digit
 *              (0 through 9).
 *
 * Return: 1 if c is a digit, 0 otherwise (Success)
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
