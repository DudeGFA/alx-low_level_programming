#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at an index
 * @head: head of singly linked list.
 * @idx: node index
 * @n: int
 * Return: void
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *node;
	unsigned int i;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		free (node);
		return (NULL);
	}
	node->n = n;
	ptr = *head;
	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && ptr != NULL; i++)
		{
			ptr = ptr->next;
		}
	}

	if (ptr == NULL && idx != 0)
		return (NULL);
	if (idx != 0)
	{
		node->next = ptr->next;
		ptr->next = node;
	}
	else
	{
		node->next = *head;
		*head = node;
	}
	return (node);
}
