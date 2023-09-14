#include <ctype.h>
#include "main.h"

/**
 * _isDigit - function test if the elemnt is a digit (0 through 9)
 * @c: is just taking the value out of c variable wich has been declared earlier in the main function
 * 
 * Description: this function is just a regular function that run some tests in c argument
 * section header: this is just the section header
 * Return: 1 (Success)
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
