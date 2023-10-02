#include "main.h"

/**
* main - Entry point
* @argc: The number of command-line arguments
* @argv: An array of strings containing the command-line arguments
*
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int i = 0;

	while (argv[0][i] != '\0')
	{
		_putchar(argv[0][i]);
		i++;
	}

	_putchar('\n');
	return (0);
}

