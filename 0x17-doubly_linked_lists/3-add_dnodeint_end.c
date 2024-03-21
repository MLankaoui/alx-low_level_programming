#include "lists.h"

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
    new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	
    if  (new_node == NULL)
    {
        return (NULL);
    }
    
    new_node->n = n;
	new_node->next = NULL;
    node->prev = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		dlistint_t *tail = *head;
		while (tmp->next != NULL)
			tail = tail->next;
		tail->next = new_node;
        new_node->prev = tail;
	}
	return (*head);
}
