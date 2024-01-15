#include "main.h"
/**
* _strdup - Duplicates a string in memory.
* @str: The string to be duplicated.
*
* Return: If str is NULL or if memory allocation fails, returns NULL;
* otherwise, returns a pointer to the duplicated string.
*/
char *_strdup(char *str)
{


	int length;

	char *dup;

	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	dup = malloc((length + 1) * sizeof(char));

	if (dup == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; i < length; i++)
	{
		dup[i] = str[i];
	}

	return (dup);

	free(dup);
}
