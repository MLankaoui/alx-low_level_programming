#include "function_pointers.h"
/**
* print_name - Prints a name using a function pointer.
* @name: The name to be printed.
* @f: A pointer to a function that takes a char* as a parameter
* and returns void.
*
* Description: This function takes a name and a
* function pointer as arguments.
* It checks if the name and function pointer are not NULL,
* and then calls the
* function with the provided name as an argument.
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}

