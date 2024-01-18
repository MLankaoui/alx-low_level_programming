#include "main.h"

/**
 * string_nconcat - Concatenates n characters from s2 to s1.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of characters from s2 to concatenate.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;

	char *ptr;

	ptr = malloc((strlen(s1) + n + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < strlen(s1); i++)
	{
		ptr[i] = s1[i];
	}

	if (n < strlen(s2))
	{
		for (j = 0; j < n; j++)
		{
			ptr[i + j] = s2[j];
		}
	}
	else
	{
		for (j = 0; j < strlen(s2); j++)
		{
			ptr[i + j] = s2[j];
		}
	}

	ptr[i + j] = '\0';

	return (ptr);

}
