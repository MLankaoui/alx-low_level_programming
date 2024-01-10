#include "main.h"
int isPalRec(char *s, int b, int e);

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to check
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{

	int n;

	n = 0;
	/*calcualting the length*/
	while (s[n] != '\0')
	{
		n++;
	}
	/*base condition*/
	if (n == 0)
	{
		return (1);/*an empty string is a palindrome*/
	}

	return (isPalRec(s, 0, n - 1));
}
/**
 * isPalRec - Helper function to check if a substring is a palindrome
 * @s: The string to check
 * @b: The beginning index of the substring
 * @e: The ending index of the substring
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int isPalRec(char *s, int b, int e)
{
	/*if there is only one character*/
	if (b == e)
	{
		return (1);
	}
	/*if the first and last element doesn't match*/
	if (s[b] != s[e])
	{
		return (0);
	}
	if (b < e + 1)
		return (isPalRec(s, b + 1, e - 1));

	return (1);
}
