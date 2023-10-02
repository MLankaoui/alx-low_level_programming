#include "main.h"

/**
* main - Entry point
* @argc: The number of command-line arguments
* @argv: An array containing the command-line arguments
*
* Description: This program calculates and prints the minimum number of coins
* needed to make change for a given amount of cents using coins of values 25,
* 10, 5, 2, and 1 cent.
*
* Return: 0 on success, 1 on error
*/
int main(int argc, char *argv[])
{
	int cents, coins[] = {25, 10, 5, 2, 1};

	int numCoins, count, i;

	if (argc != 2)
	{
		fprintf(stderr, "Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	numCoins = sizeof(coins) / sizeof(coins[0]);
	count = 0;

	for (i = 0; i < numCoins; i++)

	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			count++;
		}
	}

	printf("%d\n", count);

	return (0);
}
