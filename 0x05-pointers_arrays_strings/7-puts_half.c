#include "main.h"

/**
*puts_half - prints the second half of the string
*@str:just a variable that takes all the string content
*Description: prints the second half of the string
*/
void puts_half(char *str)
{
	int length = strlen(str);
	int start = length / 2; /* Start at the middle of the string*/

	if (length % 2 == 0)
	{
		start = length / 2;
	}
	else
	{
		start = (length + 1) / 2;
	}
	while (str[start] != '\0')
	{
		putchar(str[start]);
		start++;
	}

	putchar('\n'); /* Print a new line after printing the second half*/
}
