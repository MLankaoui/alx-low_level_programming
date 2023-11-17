#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * @argc: to caluclate the number of arguments
 * @argv: string that have the arguments
 */
int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
