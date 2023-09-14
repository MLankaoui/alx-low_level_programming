#include <ctype.h>
#include "main.h"

/**
 * isDigit - function test if the elemnt is a digit (0 through 9)
 * 
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
