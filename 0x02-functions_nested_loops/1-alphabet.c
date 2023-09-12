#include "main.h"



void print_alphabet(void)
{
    char alpha = 'a'; // Add a newline character to separate the output from the shell prompt.
    while (alpha <= 'z')
    {
        _putchar(alpha);
        alpha++;
    }
    _putchar('\n');
}
