/* preprocessor directive for our program*/
#include <stdio.h>
/**
 * main - our main program function
 */

int main(void)
{
	printf("Size of a char : %zu",sizeof(char));
	printf("Size of an int: %zu",sizeof(int));
	printf("Size of an long int: %zu",sizeof(long));
	printf("Size of a long long int: %zu",sizeof(long long int));
	printf("Size of a float : %zu",sizeof(float));

	return (0);
}
