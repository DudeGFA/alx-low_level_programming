#include "lists.h"
#include <stdio.h>
/**
 *print_listint - prints the members of a list
 *
 *@h: pointer to a linked list
 *Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	int i = 1;

	if (h)
	{
		if (h != NULL)
		{
			if (h->n)
				printf("%d\n", h->n);
			else
				printf("(nil)\n");
			return (i + print_listint(h->next));
		}
	}
	return (0);
}
