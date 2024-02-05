#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: Number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;

	int numberOfNodes;

	numberOfNodes = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		numberOfNodes++;
	}

	return (numberOfNodes);
}
