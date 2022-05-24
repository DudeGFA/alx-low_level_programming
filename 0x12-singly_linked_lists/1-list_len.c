#include "lists.h"
#include <stdio.h>
/**
 *print_list - prints the members of a list
 *
 *@h: pointer to a linked list
 *Return: size_t
 */
size_t list_len(const list_t *h)
{
	int i = 1;

	if (h)
	{
		if (h != NULL)
		{
			return (i + list_len(h->next));
		}
	}
	return (0);
}
