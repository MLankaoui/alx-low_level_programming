#include "main.h"

/**
* _strstr - Locates a substring within a string.
* @haystack: A pointer to the string to search.
* @needle: A pointer to the substring to find.
*
* Return: A pointer to the beginning of the located substring, or NULL
*/
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack)
	{
		h = haystack;
		n = needle;

		while (*n && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);

		haystack++;
	}

	return (NULL);
}
