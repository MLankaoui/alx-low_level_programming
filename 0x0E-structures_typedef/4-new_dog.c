#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog_t structure
 * @name: pointer to the name string
 * @age: age of the dog
 * @owner: pointer to the owner string
 *
 * Return: pointer to the new dog_t structure or NULL if memory allocation fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    /* Allocate memory for a new dog_t structure*/
    dog_t *Dog = (dog_t *)malloc(sizeof(dog_t));

    /* Check if memory allocation was successful*/
    if (Dog == NULL)
    {
        return NULL;
    }

    /*Allocate memory for the name and owner strings and copy the values*/
    Dog->name = strdup(name);
    Dog->owner = strdup(owner);

    /* Check if strdup was successful */
    if (Dog->name == NULL || Dog->owner == NULL)
    {
        /* Free allocated memory if strdup fails*/
        free(Dog->name);
        free(Dog->owner);
        free(Dog);
        return NULL;
    }

    Dog->age = age;

    return Dog;
}

