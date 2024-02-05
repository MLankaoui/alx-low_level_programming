#include "lists.h"

void free_listint(listint_t *head)
{
	listint_t *new;

	while (head != NULL)
	{
		new = head;
        head = head->next;
		free(new);
	}
}
