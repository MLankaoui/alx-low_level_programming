#include "lists.h"

/**
 * get_nodeint_at_index - Returns the node at a given index in a linked list.
 * @head: Pointer to the head of the linked list.
 * @index: The index of the node to return.
 *
 * Return: Pointer to the node at the given index, or NULL if the index is out of bounds.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = head;

	if (head == NULL)
		return (0);

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	if (i != index)
		return (NULL);

	return (current);
}

