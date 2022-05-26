#include "lists.h"

/**
 * get_nodeint_at_index - prints the value of node at an index
 * @head: head of singly linked list.
 * Return: void
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i;

	ptr = head;
	for (i = 0; i <= index ; i++)
	{
		if (ptr != NULL)
		{
			if (i == index)
				return (ptr);
			ptr = ptr->next;
		}
	}
	return (NULL);
}
