#include "lists.h"

/**
* add_node_end - Adds a new node at the end of a linked list.
* @head: Pointer to the head of the linked list.
* @str: String to be stored in the new node.
*
* Return: Address of the new node or NULL if memory allocation fails.
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		list_t *temp = *head;

		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new_node;
	}

	return (new_node);
}
