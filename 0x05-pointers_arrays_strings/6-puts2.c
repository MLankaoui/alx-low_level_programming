#include "main.h"

/**
*puts2 - print 02468
*@str:takes the string
*Description: prints some numbers
*/
void puts2(char *str)
{
	int len = strlen(str);
	int i;

	for (i = 0 ; i < len ; i++)

	{
		if (i % 2 == 0)
		{
			printf("%d", str[i]);
		}
	}
	printf("\n");
}
