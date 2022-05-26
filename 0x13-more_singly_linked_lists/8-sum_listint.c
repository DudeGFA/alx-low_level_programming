#include "lists.h"

/**
 * sum_listint - frees a list
 * @head: head of singly linked list.
 * Return: void
 */

int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum = 0;

	if (head)
	{
		ptr = *head;
		while ( ptr != NULL)
		{
			sum += ptr->n;
			ptr = ptr->next;
		}
	}
	return (sum);
}
