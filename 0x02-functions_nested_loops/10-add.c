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
    int n;

    n = add(89, 9);
    printf("%d\n", n);
    return (0);
}

int add(int n, int N)
{
    
    int R = n + N;

    return R;
}
