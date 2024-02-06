#include "lists.h"

/**
* delete_nodeint_at_index - Deletes the node at a given position.
* @head: Pointer to a pointer pointing to the head of the list.
* @index: Index of the node to be deleted.
*
* Return: 1 if successful, -1 if it fails.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *prev = NULL;
	unsigned int count;

	/* If index is 0 and list is not empty */
	if (index == 0 && temp != NULL)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	count = 0;

	/* Traverse to the node before the desired index */
	while (temp != NULL && count < index)
	{
		prev = temp;
		temp = temp->next;
		++count;
	}

	/* Return -1 if index is out of range */
	if (temp == NULL)
	{
		return (-1);
	}

	/* Delete the node at the given index */
	prev->next = temp->next;
	free(temp);

	return (1);
}
