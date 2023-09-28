#include "main.h"

void _puts_recursion(char *s)
{
    int i = 0;

    if (s[i] == '\0')
    {
        return;
    }
    else{
        s[i]++;
    }

}