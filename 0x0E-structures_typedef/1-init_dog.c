#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Initializes a dog structure.
 * @d: Pointer to the dog structure to be initialized.
 * @name: Pointer to a character array representing the dog's name.
 * @age: Floating-point number representing the dog's age.
 * @owner: Pointer to a character array representing the owner's name.
 *
 * Description:
 * This function takes a pointer to a struct dog and initializes its members
 * with the provided values for name, age, and owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
