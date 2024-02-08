#include "main.h"

void print_binary(unsigned long int n)
{
	unsigned long int temp = n;

	int size = 0, i;

	if (n == 0)
	{
		printf("0\n");
		return;
	}

	while (temp > 0)
	{
		temp = temp >> 1;
		size++;
	}

	for (i = size - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
			printf("1");
		else
			printf("0");
	}
	printf("\n");
}
