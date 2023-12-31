#include <stddef.h>
#include "dog.h"

/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d:the variable which we will asign the name and age and owner
 * @owner: parameter taken form our dog struct
 * @name:parameter taken form our dog struct
 * @age:parameter taken form our dog struct
 * Description : a function that initialize a variable of type struct dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
