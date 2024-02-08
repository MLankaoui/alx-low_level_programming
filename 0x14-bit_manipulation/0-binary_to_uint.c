#include "main.h"

unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
    unsigned int newDec;

    newDec = 0;

	if (b == NULL)
		return (0);
    
	for (i = 0; i < strlen(b); i++)
	{
		if (b[i] != 1 || b[i] != 0)
			return (0);

        else
        {
            newDec = newDec + ((b[i] - '0') * pow(2, i));
        }
	}

    return (newDec);
}
