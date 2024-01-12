#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - Entry point
* @argc: The number of command-line arguments
* @argv: An array containing the command-line arguments
*
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int i, r;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}

	r = 0;

	for (i = 1; i < argc; i++)
	{
		char *endptr;

		/*converts a string to a long integer*/
		long number = strtol(argv[i], &endptr, 10);

		if (*endptr == '\0' && *argv[i] != '\0')
		{
			r += number;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", r);
	return (0);
}
