#include "main.h"

/**
 * cap_string - capitalizes everey word of a string
 * @s: string to modify
 *
 * Return: the resulting string
 */
char *cap_string(char *s)
{
	int i, j;

	char spe[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'}; /* arry that has all the non text values possible*/

	for (i = 0; s[i] != '\0'; i++)/*go from the beginnering to the end of the string*/
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')/*if this is the first element and that first element is between a and z s[i] - 32 just for uppercase*/
			s[i] -= 32;

		for (j = 0; j < 13; j++) /* a loop to iterate over the content of the array of non text*/
		{
			if (s[i] == spe[j])/*if an elemnt is a non text*/
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')/*if the element after is between a and z capitalize*/
				{
					s[i + 1] -= 32;
				}
			}
		}
	}

	return (s);
}
