#include "main.h"

/**
 * _strdup - Duplicates a string.
 * @str: The string to be duplicated.
 *
 * Return: If str is NULL or if memory allocation fails, returns NULL.
 * Otherwise, returns a pointer to the newly created duplicate string.
 */
char *_strdup(char *str)
{
	char *duplic;
	int i, length;
	/*returning null if there is nothing in the string*/
	if (str == 0)
	{
		return (NULL);
	}
	/*a loop to calculate the length of str*/
	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	duplic = malloc(length * sizeof(char));
	i = 0;
    /*to have the copy of str in duplic*/
	while (str[i] != '\0')
	{
		duplic[i] = str[i];
		i++;
	}

	return (duplic);
}
