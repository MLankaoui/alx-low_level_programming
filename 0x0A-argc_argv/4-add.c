#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point of the program
* @argc: The number of command-line arguments
* @argv: An array of strings containing the command-line arguments
*
* Return: 0 on success, 1 on error
*/
int main(int argc, char *argv[])
{
	int sum = 0, i, num;

	if (argc == 1)
	{
		putchar('0');
		putchar('\n');
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);

		if (num == 0 && argv[i][0] != '0')
		{
			printf("Error\n");
			return (1);
		}

		sum += num;
	}

	printf("%d\n", sum);

	return (0);
}