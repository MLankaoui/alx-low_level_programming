#include "lists.h"

/**
* free_listint2 - Frees a linked list and sets the head to NULL
* @head: Pointer to the pointer to the first node of the list
*
* This function frees all the nodes in a linked list and sets the head
* pointer to NULL.
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}
