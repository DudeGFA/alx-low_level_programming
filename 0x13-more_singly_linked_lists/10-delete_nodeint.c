#include "lists.h"

/**
 * delete_nodeint_at_index - inserts node at an index
 * @head: head of singly linked list.
 * @index: node index
 * Return: void
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *node, *temp;
	unsigned int i;

	if (head)
	{
		ptr = *head;
		if (index < 0 || *head == NULL)
			return (-1);
		if (index != 0)
		{
			for (i = 0; i < index && ptr != NULL; i++)
			{
				node = ptr;
				ptr = ptr->next;
			}
			if (ptr == NULL)
				return (-1);
		}
		else
		{
			temp = *head;
			*head = (*head)->next;
			free(temp);
			return (1);
		}
		node->next = ptr->next;
		free(ptr);
		return (1);
	}
	return (-1);
}
