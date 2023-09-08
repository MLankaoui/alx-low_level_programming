#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n > 0)
	{
		write(1, "%d is positive", n, 15);
	}
	else if (n == 0)
	{
		printf(1, "%d is zero", n, 16);
	}
	else
	{
		printf(1, "%d is negative", n, 10);
	}

	return (0);
}
