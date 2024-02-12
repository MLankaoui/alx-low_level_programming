#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
    FILE *ptr;
    char *buffer;
    ssize_t counterOfLetters = 0;

    buffer = malloc(letters * sizeof(size_t));
    if (filename == NULL || buffer == NULL)
    {
        return 0;
    }

    ptr = fopen(filename, "r");

    if (ptr == NULL)
    {
        return (0);
    }
    
    while (fgets(buffer, letters, ptr) != NULL)
    {
        fputs(buffer, stdout);
        counterOfLetters += strlen(buffer);
    }

    fclose(ptr);

    return counterOfLetters;
}