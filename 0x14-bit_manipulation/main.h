#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdio.h>
#include <unistd.h>
#include <math.h>
#include <string.h>

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
void _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);

#endif
