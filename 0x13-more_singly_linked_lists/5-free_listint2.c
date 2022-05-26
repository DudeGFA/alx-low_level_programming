#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: head of singly linked list.
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	while ((ptr = *head) != NULL)
	{
		*head = (*head)->next;
		free(ptr);
	}
}
