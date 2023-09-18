#include "main.h"

/**
 * rev_string - Reverse a string in-place.
 * @s: Pointer to the string to be reversed.
 *
 * Description: This function reverses the characters in the given string @s
 * in-place, effectively modifying the original string.
 */
void rev_string(char *s)
{
	int len = 0;
	int start, end;

	/* Calculate the length of the string */
	while (s[len] != '\0')
	{
		len++;
	}

	start = 0;
	end = len - 1;

	/* Swap characters from the beginning and end of the string */
	while (start < end)
	{
		/* Swap characters at the start and end positions */
		char temp = s[start];

		s[start] = s[end];
		s[end] = temp;

		/* Move the start and end pointers towards each other */
		start++;
		end--;
	}
}

