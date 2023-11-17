#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
* @argc: to caluclate the number of arguments
* @argv: string that have the arguments
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n" , argv[i]);
	}
	return (0);
}
