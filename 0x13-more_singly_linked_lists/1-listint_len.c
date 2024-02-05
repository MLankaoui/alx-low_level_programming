#include "lists.h"

size_t listint_len(const listint_t *h)
{
    const listint_t *temp = h;

    int numberOfNodes;

    numberOfNodes = 0;

    while (temp != NULL)
    {
        temp = temp->next;
        ++numberOfNodes;
    }

    return (numberOfNodes);
}