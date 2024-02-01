#include "lists.h"

/**
 * list_len - Counts the number of elements in a linked list.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t list_len(const list_t *h)
{
	size_t numberOfNodes = 0;

	while (h != NULL)
	{
		h = h->next;
		numberOfNodes++;
	}

	return (numberOfNodes);
}
