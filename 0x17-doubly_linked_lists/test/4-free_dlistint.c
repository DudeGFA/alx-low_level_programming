#include <stdio.h>
#include "lists.h"
/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to head of doubly liked list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *prev;

	while (head != NULL)
	{
		prev = head;
		head = head->next;
		free(prev);
	}
}
