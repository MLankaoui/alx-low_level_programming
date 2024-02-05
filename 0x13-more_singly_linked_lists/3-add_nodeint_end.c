#include "lists.h"

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = *head;

	if (temp == NULL)
	{
		return (NULL);
	}

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	return (NULL);
}
