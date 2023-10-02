#include "main.h"

/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.

int _putchar(char c)
{
	return (write(1, &c, 1));
}*/

/**
* main - Entry point
* @argc: The number of command-line arguments
* @argv: An array of strings containing the command-line arguments
*
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int i, j;

	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			putchar(argv[i][j]);
		}
		putchar('\n');
	}

	return (0);
}
