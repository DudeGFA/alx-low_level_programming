#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - returns no of nodes in a
 * doubly linked list
 * @h: pointer to head of doubly liked list
 * Return: size_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
