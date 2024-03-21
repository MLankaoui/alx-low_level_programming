#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list
 * @head: A pointer to a pointer to the head of the dlistint_t list
 * @n: The data to be added to the new node
 *
 * Return: The address of the new node, or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		dlistint_t *tail = *head;

		while (tail->next != NULL)
			tail = tail->next;
		tail->next = new_node;
		new_node->prev = tail;
	}
	return (*head);
}

