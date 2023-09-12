#include <stdio.h>
#include "main.h"

/* Function prototype */
void print_alphabet(void);

int main(void)
{
    print_alphabet();
    return (0);
}

void print_alphabet(void)
{
    char alpha[] = "abcdefghijkl";
    char ALPHA[] = "MNOPQRSTUVWXYZ"; // Corrected uppercase letters
    
    int i;

    for (i = 0; i < 12; i++)
    {
        putchar(alpha[i]);
    }
    for (i = 0; i < 14; i++)
    {
        putchar(ALPHA[i]);
    }
    putchar('\n'); // Add a newline character to separate the output from the shell prompt.
}
