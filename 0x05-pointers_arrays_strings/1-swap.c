#include "main.h"

/**
*swap_int - just give the b value to a and the a value to b
*
*@a:having the value of b
*@b:having the value of a
*/
void swap_int (int *a, int *b)
{
	int c;

	c = a;
	*a = b;
	*b = c;
}
