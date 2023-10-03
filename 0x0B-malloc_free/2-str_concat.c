#include "main.h"


/**
* str_concat - Concatenate two strings.
* @s1: The first string.
* @s2: The second string.
*
* Return: A pointer to the newly concatenated string.
*/
char *str_concat(char *s1, char *s2)
{
	char *conc;

	size_t len1, len2, total_len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	total_len = len1 + len2;

	conc = malloc(total_len + 1);
	if (conc == NULL)
		return (NULL);

	strcpy(conc, s1);
	strcat(conc, s2);

	return (conc);
}
