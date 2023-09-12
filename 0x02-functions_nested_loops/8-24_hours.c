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
    jack_bauer();
    return (0);
}
void jack_bauer(void)
{
    int i, j;
    for (i = 0; i < 24; i++)
    {
        for (j = 0; j < 60; j++)
        {
            putchar((i / 10) + '0'); // Print tens digit of hour
            putchar((i % 10) + '0'); // Print ones digit of hour
            putchar(':');
            putchar((j / 10) + '0'); // Print tens digit of minute
            putchar((j % 10) + '0'); // Print ones digit of minute
            putchar('\n'); // Newline to separate times
        }
    }
}