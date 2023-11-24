#include "main.h"

/**
 * description : function that print a character
 * 
 * _putchar - function that print a character
 * @c : takes all the characters that we want
 * Return : Write function
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}