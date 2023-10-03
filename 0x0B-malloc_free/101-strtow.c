#include "main.h"

/**
* count_words - Count the number of words in a string.
* @str: The input string.
*
* Return: The number of words in the string.
*/
int count_words(char *str)
{
	int count = 0;

	int is_word = 0;

	while (*str)
	{
		if (*str == ' ')
		{
			is_word = 0;
		}
		else if (is_word == 0)
		{
			is_word = 1;
			count++;
		}
		str++;
	}

	return (count);
}

/**
* strtow - Split a string into words.
* @str: The input string.
*
* Return: A pointer to an array of strings (words), or NULL on failure.
*/
char **strtow(char *str)
{
	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	int num_words = count_words(str);

	char **words = malloc((num_words + 1) * sizeof(char *));

	if (words == NULL)
	{
		return (NULL);
	}

	int i = 0;

	char *token = strtok(str, " ");

	while (token)
	{
		words[i] = strdup(token);
		if (words[i] == NULL)
		{
			for (int j = 0; j < i; j++)

			{
				free(words[j]);
			}
			free(words);
			return (NULL);
		}
		i++;
		token = strtok(NULL, " ");
	}

	words[i] = NULL;

	return (words);
}
