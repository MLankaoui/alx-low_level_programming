#include "main.h"

/**
* _strdup - Duplicate a string.
* @str: The string to duplicate.
*
* Return: A pointer to the newly duplicated string
*/
char *_strdup(char *str)
{
	char *dup_str;

	unsigned int i, len;

	if (str == NULL)
		return (NULL);

	len = strlen(str);
	dup_str = malloc(len + 1);
	if (dup_str == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		dup_str[i] = str[i];

	return (dup_str);
}
