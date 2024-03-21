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
	if (*head == NULL)
		*head = new_node;
	else
	{
		dlistint_t *tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node;
	}
	return (*head);
}
