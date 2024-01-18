#include "main.h"

void *malloc_checked(unsigned int b)
{
    unsigned int *ptr;

    ptr = malloc(sizeof(unsigned int) * b);

    if (ptr == NULL)
    {
        exit(98);
    }

    return(ptr);
}