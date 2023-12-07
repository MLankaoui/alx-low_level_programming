#include "lists.h"

size_t print_list(const list_t *h)
{

    if (h == NULL) {
        printf("[0] (nil)\n");
        return 0;
    }
	size_t counter;


	counter = 0;

	while (h != NULL)
	{
		h = h->next;


		counter++;
	}
	return (counter); /*the number of nodes*/

}