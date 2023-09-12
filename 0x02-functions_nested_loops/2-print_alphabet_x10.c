#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/*
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main (void)
{   
    print_alphabet_x10();
    return (0);
}
void print_alphabet_x10(void){
    
    int i,j;
    char alpha[] = "abcdefghijklmnopqrstuvwxyz";

    for (i = 0 ; i < 10 ; i++)
    {
        for (j = 0 ; j < 26 ; j++)
        {
            putchar(alpha[j]);
        }putchar('\n');
    }
}