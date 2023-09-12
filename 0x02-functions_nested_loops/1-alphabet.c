#include "main.h"

int main(void)
{
    print_alphabet();
    return (0);
}

void print_alphabet(void)
{
    char alpha = 'a'; // Add a newline character to separate the output from the shell prompt.
    while (alpha <= 'z')
    {
        _putchar(alpha);
    }
    _putchar('\n');
}
