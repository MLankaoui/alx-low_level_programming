#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_most_numbers();
    return (0);
}

int _putchar(char c)
{
    return write(1, &c, 1);
}

void print_most_numbers(void)
{
	int num = 0;

	while(num <= 9)
	{
		if (num != 2 && num != 4)
		{
			/* code */
			_putchar(num + '0');
		}
		num++;
		
	}
}