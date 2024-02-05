#include "lists.h"

/**
 * listint_len - Returns the number of elements in a listint_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: Number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp = h;

	int numberOfNodes;

	numberOfNodes = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		++numberOfNodes;
	}

	return (numberOfNodes);
}
