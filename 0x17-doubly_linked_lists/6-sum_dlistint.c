#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint - sums elements of a doubly
 * linked list
 * @head: pointer to head of doubly liked list
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
    dlistint_t *h = head;
    int sum = 0;

    while (h != NULL)
    {
        sum += h->n;
        h = h->next;
    }
    return (sum);
}
