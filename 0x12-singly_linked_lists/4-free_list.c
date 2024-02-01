#include "lists.h"

/**
 * free_list - Frees a linked list and its strings
 * @head: Pointer to the head of the list
 *
 * This function frees a linked list and the strings stored in each node.
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}
