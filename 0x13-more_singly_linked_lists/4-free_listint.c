#include "lists.h"

/**
 * free_listint - frees a list
 * @head: head of singly linked list.
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while ((ptr = head) != NULL)
	{
		head = head->next;
		free(ptr->n);
		free(ptr);
	}
}
