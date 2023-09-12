#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/*
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{   
    print_alphabet();
    return (0);
}

void print_alphabet(void)
{
    char alpha[] = "abcdefghijkl";
    char ALPHA[] = "mnopqrstuvwxyz";
    int i;

    for (i = 0 ; i < 12 ; i++)
    {
        putchar(alpha[i]);
    }
    for (i = 0 ; i < 14 ; i++)
    {
        putchar(ALPHA[i]);
    }

}