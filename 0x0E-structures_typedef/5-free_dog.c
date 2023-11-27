#include <stdlib.h>
#include "dog.h"

/**
* free_dog - Frees memory allocated for a dog structure.
* @d: Pointer to the dog structure to be freed.
*
* Description: This function frees the memory allocated for a dog structure,
* including the dynamically allocated memory for the name and owner.
*/
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	/* Free dynamically allocated memory for name and owner */
	free(d->name);
	free(d->owner);

	/* Free the memory allocated for the dog structure */
	free(d);
}
