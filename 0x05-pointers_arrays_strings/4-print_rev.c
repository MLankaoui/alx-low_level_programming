#include "main.h"

/**
*print_rev - prints a string in reverse
*@s:takes the string value from the main function
*Description:reversing a string
*/
void print_rev(char *s)
{
	int len = strlen(s);

	for (int i = len - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}

	printf("\n");
}
