#include "main.h"
#include "lists.h"

size_t print_list(const list_t *h)
{
	size_t counter;


	counter = 0;

	while (h != NULL)
	{
		h = h->next;


		counter++;
	}

    if (str == NULL)
    {
        printf("[0] (nil)");
    }
	return (counter); /*the number of nodes*/

}