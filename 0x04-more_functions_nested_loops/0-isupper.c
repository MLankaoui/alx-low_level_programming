#include <ctype.h>
#include "main.h"

/**
*isUpper - Function testing if a character is uppercase or not
*
*isUpper
*/
int _isupper(int c)
{
	if(isupper(c))
	{
		return (1);
	}
	else
	{
		return(0);
	}
}
