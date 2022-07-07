#include <stdio.h>
#include "lists.h"
size_t print_dlistint(const dlistint_t *h)
{
    int i = 0;
    while (h != NULL)
    {
        printf (("%d", (*h).n);
        h = h->next;
        i++;
    }
    return (i);
}