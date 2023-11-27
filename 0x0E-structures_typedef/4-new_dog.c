#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
* new_dog - Creates a new dog.
* @name: Name of the new dog.
* @age: Age of the new dog.
* @owner: Owner of the new dog.
*
* Return: A pointer to the new dog (dog_t), or NULL if the function fails.
*
* Description: This function creates a new dog_t structure
*/
dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *new_dog_ptr;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	/* Allocate memory for the new dog */
	new_dog_ptr = malloc(sizeof(dog_t));

	if (new_dog_ptr == NULL)
	{
		return (NULL);
	}

	/* Allocate memory and copy the name */
	new_dog_ptr->name = strdup(name);

	if (new_dog_ptr->name == NULL)
	{
		free(new_dog_ptr);
		return (NULL);
	}

	/* Copy the age and owner */
	new_dog_ptr->age = age;
	new_dog_ptr->owner = strdup(owner);
	if (new_dog_ptr->owner == NULL)
	{
		free(new_dog_ptr->name);
		free(new_dog_ptr);
		return (NULL);
	}

	return (new_dog_ptr);
}
