#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char rAlpha[] = "zyxwvutsrqponmlkjihgfedcba";
	int i;

	for (i = 0; i < 26 ; i++)
	{
		putchar(rAlpha[i]);
	}

	putchar('\n');
	return (0);
}
