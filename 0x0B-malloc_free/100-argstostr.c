#include "main.h"

/**
* argstostr - Concatenates all the command-line arguments into a single string.
* @ac: The number of command-line arguments.
* @av: An array containing the command-line arguments.
*
* Return: A pointer to the concatenated string, or NULL if memory
* allocation fails.
*/
char *argstostr(int ac, char **av)
{
	char *ptr;

	int total_length = 0, current_length;

	int i, j;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			current_length = strlen(av[i]);
			total_length += current_length + 1; /* Add 1 for the newline character */
		}
	}

	ptr = (char *)malloc(sizeof(char) * total_length + 1);
	if (ptr == NULL)
	{
		return (NULL); /* Memory allocation failed */
	}

	/* Concatenate arguments */
	for (i = 0, j = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			current_length = strlen(av[i]);
			strncpy(ptr + j, av[i], current_length);
			j += current_length;
			ptr[j++] = '\n'; /* Add newline character between arguments */
		}
	}

	return (ptr);
}
