#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list
 * @head: A pointer to a pointer to the head of the dlistint_t list
 * @n: The data to be added to the new node
 *
 * Return: The address of the new node, or NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	if (head == NULL)
	{
		return (NULL);
	}

	node = malloc(sizeof(dlistint_t));

	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->next = *head;
	node->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = node;
	}
	*head = node;
	return (node);
}

