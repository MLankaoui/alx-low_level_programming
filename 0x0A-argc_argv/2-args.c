#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
* @argc: to caluclate the number of arguments
* @argv: string that have the arguments
*/
int main(int argc, char *argv[])
{
	int i;

	i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
