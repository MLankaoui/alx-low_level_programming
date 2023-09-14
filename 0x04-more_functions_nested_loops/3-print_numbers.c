#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_numbers();
    return (0);
}
int _putchar(char c)
{
    return write(1, &c, 1);
}

void print_numbers(void)
{
    int num = 0;

    do
    {	
    	if(num !=9)
    	{
    		_putchar(num + '0');
        	num++;
    	}
    	else
    	{
    		_putchar(num + '0');
    		printf("$");
    		num++;
    	}
        
    }
    while (num <= 9);
}






