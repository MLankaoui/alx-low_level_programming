#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/*
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
    _isalpha(int c);
    return (0);
}
int _isalpha(int c)
{
    if (isalpha(c))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}