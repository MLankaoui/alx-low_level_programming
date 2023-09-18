#include "main.h"

/**
*puts2 - print 02468
*@str:takes the string
*Description: prints some numbers
*/
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
		i++;
	}

	putchar('\n');

}
