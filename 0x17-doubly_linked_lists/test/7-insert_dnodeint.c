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
    dlistint_t *new, *curr = NULL;
    dlistint_t *temp = *h;

    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
        return (NULL);
    new->n = n;
    for (i = 0; i < idx; i++)
    {
        if (temp == NULL)
        {
            return (NULL);
        }
        curr = temp;
        temp = temp->next;
    }
    new->next = temp;
    new->prev = curr;
    if (curr != NULL)
        curr->next = new;
    if (temp != NULL)
        temp->prev =  new;
    while ((*h)->prev != NULL && *h != NULL)
    {
        *h = (*h)->prev;
    }
    return (new);
}