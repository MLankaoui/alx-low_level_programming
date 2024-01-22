#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints information about a dog
 * @d: Pointer to a struct dog
 */
void print_dog(struct dog *d)
{
	/* Check if the pointer is NULL */
	if (d == NULL)
	{
		return;
	}

	/* Check if name is NULL and print accordingly */
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}

	/* Check if age is zero and print accordingly */
	if (d->age == 0.0)
	{
		printf("Age: (nil)\n");
	}
	else
	{
		printf("Age: %f\n", d->age);
	}

	/* Check if owner is NULL and print accordingly */
	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}

