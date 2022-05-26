#include "lists.h"
#include <stdio.h>
/**
 *listint_len - prints the members of a list
 *
 *@h: pointer to a linked list
 *Return: size_t
 */
size_t listint_len(const listint_t *h);
{
	int i = 1;

	if (h)
	{
		if (h != NULL)
		{
			return (i + listint_len(h->next));
		}
	}
	return (0);
}
