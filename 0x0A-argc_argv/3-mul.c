#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * @argc: to caluclate the number of arguments
 * @argv: string that have the arguments
 */
int main(int argc, char *argv[])
{
	int num, Num;

	if (argc != 3)
	{
		printf("Error\n");
		return (-1);
	}
	num = atoi(argv[1]);

	Num = atoi(argv[2]);
	printf("%d", num * Num);
	return (0);
}
