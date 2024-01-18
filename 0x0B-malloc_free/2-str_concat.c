#include "main.h"

/**
* str_concat - Concatenates two strings.
* @s1: The first string.
* @s2: The second string.
*
* Return: A pointer to the concatenated string.
*/
char *str_concat(char *s1, char *s2)
{
	char *conc;

	int lengths1, lengths2, i, j;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	lengths1 = 0;
	/* to calculate the length of s1*/
	while (s1[lengths1] != '\0')
	{
		lengths1++;
	}
	lengths2 = 0;
	/* to calculate the length of s2*/
	while (s2[lengths2] != '\0')
	{
		lengths2++;
	}
	/*allocation of the memory*/
	conc = malloc((lengths1 + lengths2 + 1) * sizeof(char));
	/*if insufficient or no allocation is done return NULL*/
	if (conc == NULL)
		return (NULL);
	/*taking conc and initilize it with s1 content*/
	for (i = 0; i < lengths1; i++)
	{
		conc[i] = s1[i];
	}
	/*concatenating it with content of s2 string*/
	for (j = 0; j < lengths2; j++)
	{
		conc[i + j] = s2[j];
	}
	/*hard coding the null value after all of that*/
	conc[i + j] = '\0';
	/*returning the pointer*/
	return (conc);
	/*freeing everytinhg to prevent any leaks*/
	free(conc);
}

