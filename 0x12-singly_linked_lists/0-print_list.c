#include "lists.h"

/**
 * print_list - Prints all the elements of a linked list.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
			count++;
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
	}

	return (count);
}
