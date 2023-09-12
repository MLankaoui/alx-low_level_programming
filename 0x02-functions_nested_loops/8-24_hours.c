#include "main.h"

/*
*main - Entry point
*
*Return: Always 0 (Success)
*/
void jack_bauer(void)
{
    int i, j;
    for (i = 0; i < 24; i++)
    {
        for (j = 0; j < 60; j++)
        {
            _putchar((i / 10) + '0'); // Print tens digit of hour
            _putchar((i % 10) + '0'); // Print ones digit of hour
            _putchar(':');
            _putchar((j / 10) + '0'); // Print tens digit of minute
            _putchar((j % 10) + '0'); // Print ones digit of minute
            _putchar('\n'); // Newline to separate times
        }
    }
}