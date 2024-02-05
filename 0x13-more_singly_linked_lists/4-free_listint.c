#include "lists.h"

void free_listint(listint_t *head)
{
	listint_t *new;

	while (new= NULL)
	{
		new = new->next;
		free(new);
	}

    free(new);
}
