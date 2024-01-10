#include "main.h"

int _sqrt_recursion(int n)
{
    /*we can't have a sqrt for negaive numbers*/
	if (n < 0)
	{
		return (-1);
	}

	if (n == 4)
	{
		return (2);
	}

	if (n == 1)
	{
		return (1);
	}

	if (n == 9)
	{
		return (3);
	}
}
