#include <unistd.h>

/**
 * _putchar - writes a character to the standard output (stdout)
 * @c: The character to be written
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _putchar(char c)
{
	write(1, &c, 1);
}
