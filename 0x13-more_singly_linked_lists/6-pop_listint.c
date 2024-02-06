#include "lists.h"

/**
 * pop_listint - Removes the head node of a linked list and returns its data
 * @head: Pointer to the pointer to the first node of the list
 *
 * This function removes the head node of a linked list, frees the memory
 * allocated to it, and returns the data stored in the removed node.
 *
 * Return: Data stored in the removed node, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int data;

	if (*head == NULL)
		return (0);

	(*head) = (*head)->next;
	data = temp->n;
	free(temp);

	return (data);
}
