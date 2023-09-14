#include <ctype.h>
#include "main.h"

/**
*  _isupper - Function testing if a character is uppercase or not
*@c: takes the value assigne in the main function and give it to this function
(*
*Description: all what this function is gonna do is just
*section header: this is a header section
*Return: 1 (Success)
*/
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
