#include <stdio.h>	
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %zubyte(s)\n", sizeof(char));
	printf("Size of an int: %zubyte(s)\n", sizeof(int));
	printf("Size of a long int: %zubyte(s)\n", sizeof(long));
	printf("Size of a long long int: %zubyte(s)\n", sizeof(long long int));
	printf("Size of a float: %zubyte(s)\n", sizeof(float));
	return (0); 
}
