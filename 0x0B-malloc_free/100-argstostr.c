#include <stdlib.h>

/**
* argstostr - Concatenate all arguments into a single string.
* @ac: The number of arguments.
* @av: An array of argument strings.
*
* Return: A pointer to the concatenated string, or NULL if it fails.
*/
char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == NULL)
	{
		return (NULL); /* If ac is 0 or av is NULL, return NULL */
	}

	int total_length = 0;

	int i, j, k = 0;

	/* Calculate the total length of the concatenated string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			total_length++;
		}
		total_length++; /* Add 1 for the newline character */
	}

	/* Allocate memory for the concatenated string */
	char *concatenated = malloc((total_length + 1) * sizeof(char));

	if (concatenated == NULL)
	{
		return (NULL); /* Memory allocation failed, return NULL */
	}

	/* Copy each argument and add a newline character */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concatenated[k++] = av[i][j];
		}
		concatenated[k++] = '\n'; /* Add newline character */
	}

	concatenated[k] = '\0'; /* Null-terminate the concatenated string */

	return (concatenated);
}
