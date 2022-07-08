#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - gets node at index
 * @head: pointer to head of doubly liked list
 * index: index of node to be returnd
 * Return: node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    dlistint_t *h = head;
    unsigned int i;

    for (i = 1; h != NULL, i <= index; i++)
    {
        h = h->next;
    }
    if (h != NULL)
        return (h);
    return (NULL);
}