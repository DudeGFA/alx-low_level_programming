#include "lists.h"
/**
 * pop_listint - frees a list first node
 * @head: head of singly linked list.
 * Return: void
 */

int pop_listint(listint_t **head);
{
	listint_t *ptr;
	int c;

	if (head && (*head != NULL))
	{
		c = (*head)->n;
		ptr = *head;
		(*head) = (*head)->next;
		free(ptr);
		return (c);
	}
	return (0);
}
