#include <stdio.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at an
 * index of a doubly linked list
 * @head: pointer to head of doubly liked list
 * @index: idx of new node
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *curr = NULL;
	dlistint_t *temp = *head;

	if (*head == NULL)
	{
		return (-1);
	}
	for (i = 0; i < index; i++)
	{
		if (temp == NULL)
			return (-1);
		curr = temp;
		temp = temp->next;
	}
	if (temp == NULL)
		return (-1);
	if (curr != NULL)
		curr->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev =  curr;
	while ((*head)->prev != NULL)
	{
		*head = (*head)->prev;
	}
	if (index == 0)
	{
		*head = temp->next;
	}
	free(temp);
	return (1);
}
