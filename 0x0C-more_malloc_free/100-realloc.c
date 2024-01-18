#include "main.h"

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{


	if (new_size > old_size)
	{
		void *new_ptr = malloc(new_size);

		if (new_ptr == NULL)
		{
			return (NULL);
		}
		memcpy(new_ptr, ptr, old_size);
		free(ptr);
		return (new_ptr);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
	}

	if (ptr == NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	return (ptr);
}
