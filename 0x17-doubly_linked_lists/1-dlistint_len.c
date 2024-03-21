#include "lists.h"

/**
* dlistint_len - Returns the number of elements in a doubly linked list
* @h: A pointer to the head of the dlistint_t list
*
* Return: The number of elements in the list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		length++;
	}

	return (length);
}
