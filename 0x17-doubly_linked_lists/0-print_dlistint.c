#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - prints members of a 
 * doubly linked list
 * @h: pointer to head of doubly liked list 
 * Return: size_t 
 */
size_t print_dlistint(const dlistint_t *h)
{
    int i = 0;
    while (h != NULL)
    {
        printf("%d\n", (*h).n);
        h = h->next;
        i++;
    }
    return (i);
}