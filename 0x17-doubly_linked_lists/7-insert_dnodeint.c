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
    int i;
    dlistint_t *new, *temp = *h;

    new = malloc(sizeof(dlistint_t))
    if (new == NULL)
        return (NULL);
    new->n = n;
    for (i = 0; i < (idx - 1); i++)
    {
        if (temp == NULL)
            return (NULL)
        temp = temp->next;
    }
    if (temp != NULL)
        new->next = temp->next;
    else
        new->next = NULL;
    new->prev = temp;
    if (temp->next != NULL)
        temp->next->prev = new;
    temp->next = new;
    while ((*h)->prev != NULL)
    {
        *h = (*h)->prev;
    }
    return (new);
}