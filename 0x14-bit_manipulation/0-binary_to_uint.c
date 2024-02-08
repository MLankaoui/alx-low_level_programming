#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string containing the binary number.
 *
 * Return: The converted unsigned integer, or 0 if @b is NULL or contains
 *         characters other than '0' and '1'.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;

	unsigned int newDec;

	unsigned int len;

	newDec = 0;

	if (b == NULL)
		return (0);
	len = strlen(b);
	for (i = 0; i < len; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);

		else
		{
			newDec = (newDec << 1) + (b[i] - '0');
		}
	}

	return (newDec);
}
