#include "variadic_functions.h"

/**
* _putchar - Writes a character to the standard output
* @c: The character to be written
*
* Description: This function writes a character to the standard output.
*
* Return: On success, returns the character written as an unsigned char
* cast to an int. On error, returns -1 and sets errno appropriately.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
