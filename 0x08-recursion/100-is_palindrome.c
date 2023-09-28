#include "main.h"

/**
* is_palindrome - Check if a string is a palindrome.
* @s: The string to check.
*
* Return: 1 if s is a palindrome, 0 otherwise.
*/
int is_palindrome(char *s)
{
	int left = 0;

	int right = strlen(s) - 1;

	while (left < right)
	{
		if (s[left] != s[right])
		{
			return (0);
		}
		left++;
		right--;
	}

	return (1);
}
