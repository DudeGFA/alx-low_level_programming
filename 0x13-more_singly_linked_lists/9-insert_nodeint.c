#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at an index
 * @head: head of singly linked list.
 * @idx: node index
 * Return: void
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *node;
	unsigned int i;

	if (head && idx && n)
	{
		node = malloc(sizeof(listint_t));
		if (node == NULL)
		{
			free (node);
			return (NULL);
		}
		node->n = n;
		ptr = *head;
		if (*head == NULL)
		{
			*head = malloc(sizeof(listint_t));
			if (*head == NULL)
			{
				free (*head);
				return (NULL);
			}
			(*head)->n = n;
			(*head)->next = NULL;
			return(*head);
		}
		for (i = 1; i < idx; i++)
		{
			if (ptr != NULL)
			{
				ptr = ptr->next;
			}
			else
				return (NULL);
		}
		if (ptr->next != NULL)
		{
			node->next = ptr->next;
			ptr->next = node;
		}
		else
		{
			ptr->next = node;
			node->next = NULL;
		}
		return (node);
	}
	return (NULL);
}
