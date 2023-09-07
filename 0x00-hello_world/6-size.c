/* preprocessor directive for our program*/
#include <stdio.h>
/**
 * main - our main program function
 */

int main(void)
{
	printf("Size of a char : %zu\n byte(s)",sizeof(char));
	printf("Size of an int: %zu\n byte(s)",sizeof(int));
	printf("Size of an long int: %zu\n byte(s)",sizeof(long));
	printf("Size of a long long int: %zu\n byte(s)",sizeof(long long int));
	printf("Size of a float : %zu\n byte(s)",sizeof(float));

	return (0);
}
