#include "main.h"
/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The unsigned long int to extract the bit from.
 * @index: The bit index (0-based).
 *
 * Return: The bit value at the index, or -1 on error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
