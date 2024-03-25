#include <stddef.h>

/**
* _strspn - Gets the length of a prefix substring.
* @s: Pointer to the string to search.
* @accept: Pointer to the string containing accepted characters.
*
* Return: The number of bytes in the initial segment of s
* which consist only of bytes from accept.
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	int is_accept[256] = {0};

	while (*accept)
	{
		is_accept[(unsigned char)*accept] = 1;

		accept++;
	}
	while (*s && is_accept[(unsigned char)*s])

	{
		count++;
		s++;
	}

	return (count);
}
