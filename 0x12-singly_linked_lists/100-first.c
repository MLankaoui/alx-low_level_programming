#include "lists.h"

/**
* pre_main - Function to execute before the main function
*/
void pre_main(void) __attribute__((constructor));

void pre_main(void)
{
	printf("You're beat! and yet, you must allow,\nIbore my house upon my back!\n");
}
