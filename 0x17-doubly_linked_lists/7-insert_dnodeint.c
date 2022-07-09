#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts new node at an
 * index of a doubly linked list
 * @h: pointer to head of doubly liked list
 * Return: pointer to new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    unsigned int i;
    dlistint_t *new, *temp = *h;

    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
    {
        return (NULL);
    }
    new->n = n;
    for (i = 0; i < idx; i++)
    {
        if (temp == NULL)
        {
            return (NULL);
        }
        temp = temp->next;
    }
    new->next = temp;
    new->prev = temp->prev;
    temp->prev->next = new;
    temp->prev = new;
    while ((*h)->prev != NULL)
    {
        *h = (*h)->prev;
    }
    return (new);
}