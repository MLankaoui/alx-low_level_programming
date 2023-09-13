#include "main.h"

/**
*main - tests function that prints if integer is positive or negative
*Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	i = 98;

	positive_or_negative(i);
	return (0);
}
void positive_or_negative(int i)
{
    if (i == 0)
    {
        printf("%d is zero",i);
    }
    else if (i > 0)
    {
        printf("%d is positif",i);
    }
    else{
        printf("%d is negatif",i);
    }
}