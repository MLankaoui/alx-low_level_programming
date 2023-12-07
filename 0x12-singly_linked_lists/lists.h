#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

size_t print_list(const list_t *h);


typedef struct Node {
    int data;            
    struct Node* next;
} list_t;


#endif
