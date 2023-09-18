#include "main.h"

/**
 * my_strcpy - Copy a string from src to dest, including the null byte.
 * @dest: The destination buffer.
 * @src: The source string.
 * Return: A pointer to dest.
 */
char *my_strcpy(char *dest, const char *src)
{
	strcpy(dest, src);
	return (dest);
}
