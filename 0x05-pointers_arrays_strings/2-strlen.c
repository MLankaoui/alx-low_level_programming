#include "main.h"

/**
*_strlen - just a function that give the length of a string
*@s: just a parameter that represents the string value
*Return: length value
*/
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
