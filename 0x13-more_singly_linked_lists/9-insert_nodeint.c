#include "lists.h"

/**
* insert_nodeint_at_index - Inserts a new node at a given position.
* @head: Pointer to a pointer pointing to the head of the list.
* @idx: Index of the list where the new node should be added.
* @n: Value to be inserted into the new node.
*
* Return: Address of the new node, or NULL if it fails.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;

	listint_t *newNode, *current;

	/* Allocate memory for the new node */
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	/* Initialize the new node */
	newNode->n = n;
	newNode->next = NULL;

	/* Insert at the beginning of the list if idx is 0 */
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (*head);
	}

	/* Traverse the list to the position before the desired index */
	current = *head;
	for (i = 0; i < idx - 1 && current != NULL; i++)
	{
		current = current->next;
	}

	/* Return NULL if index out of range */
	if (current == NULL)
		return (NULL);

	/* Insert the new node into the list */
	newNode->next = current->next;
	current->next = newNode;

	return (newNode);
}

