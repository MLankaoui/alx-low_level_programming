#include "main.h"

int _atoi(char *s)
{
    int num = 0;
    int i;
    
	for (i = 0; s[i] != '\0'; i++) {
        num = num * 10 + (s[i] - 48);
	}
}
