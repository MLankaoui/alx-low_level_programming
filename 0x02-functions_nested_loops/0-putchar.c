#include <stdio.h>
#include <stdlib.h>

/*
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{   
    char putchar_name[] = "_putchar";
    int i;

    for (i = 0 ; i < 8 ; i++)
    {
        putchar(putchar_name[i]);
    }
    return (0);
}