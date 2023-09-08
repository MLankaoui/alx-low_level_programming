#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n % 10 > 5)
	{
		printf("Last digit of %d is greater then 5", n);
	}
	
	else if (n % 10 == 10)
	{
		printf("Last digit of %d is 0", n);	
	}
	else if (n < 6 && n != 0)
	{
		printf("Last digit of %d is less than 6 and not 0");
	}
	return (0);
}
