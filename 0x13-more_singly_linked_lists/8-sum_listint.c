#include "lists.h"
/**
* sum_listint - Sums all the data (n) of a linked list
* @head: Pointer to the first node of the list
*
* This function calculates the sum of all the data stored in the nodes of a
* linked list.
*
* Return: The sum of all the data stored in the linked list,
*         or 0 if the list is empty
*/
int sum_listint(listint_t *head)
{
	int sum, i;

	sum = 0;

	for (i = 0; head != NULL ; i++, head = head->next)
		sum += head->n;

	return (sum);
}
