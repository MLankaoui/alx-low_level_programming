#include "main.h"

/**
 * main - Entry point of the program
 * @ac: The number of command-line arguments
 * @av: An array containing the command-line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int ac, char *av[])
{
	char *s;

	s = argstostr(ac, av);
	if (s == NULL)
	{
		return (1);
	}
	printf("%s", s);
	free(s);
	return (0);
}
