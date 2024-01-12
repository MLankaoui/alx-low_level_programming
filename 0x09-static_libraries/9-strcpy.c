#include "main.h"

/**
 * _strcpy - Copy a string from src to dest, including the null byte.
 * @dest: The destination buffer.
 * @src: The source string.
 * Return: A pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
