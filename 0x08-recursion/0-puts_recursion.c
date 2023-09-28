#include "main.h"

void _puts_recursion(char *s)
{
    int i;
    int len;
    int j;
    for (i = 0 ; s[i] < '\0' ; i++)
    {
        len++;
    }
    for (j = 0 ; s[j] < len ; i++)
    {
        _putchar(s[i]);
    }
}