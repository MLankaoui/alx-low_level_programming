#include <ctype.h>
#include "main.h"

/**
*isUpper - Function testing if a character is uppercase or not
*
*Return: Always 0 (Success)
*/
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return(0);
	}
}
