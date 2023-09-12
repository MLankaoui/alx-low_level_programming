#include <stdio.h>
#include <stdlib.h>
#include "main.h"
int n;
/*
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main (void)
{
    
    int abs_n  = _abs();
    putchar(abs_n + '0');
    return (0);
}
int _abs(int)
{
    int abs_n = abs(n);
    return abs_n;
}
