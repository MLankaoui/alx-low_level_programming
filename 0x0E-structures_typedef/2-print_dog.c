#include <stdio.h>
#include "dog.h"

/**
 * print_dog - a function that prints a struct dog
 * @d:a variable within that can take the struct member
 * Description: a function that prints a struct dog
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	if (d->name == NULL)
	{
		printf("Name : (nil)");
	}

	if (d->owner == NULL)
	{
		printf("Ower : (nil)");
	}

	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
