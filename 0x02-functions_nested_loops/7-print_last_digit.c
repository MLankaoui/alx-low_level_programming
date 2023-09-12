#include <stdio.h>
#include <stdlib.h>
#include "main.h"
int n;
/*
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
    last_digit = print_last_digit(n);
    putchar(last_digit + '0');
    return (0);
}
int print_last_digit(int)
{
    int last_digit = n % 10;
    return last_digit;
}

