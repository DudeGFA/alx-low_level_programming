#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at
 * the beginning of a dlistint_t list
 * @head: pointer to head of doubly liked list
 * @n: value of new node
 * Return: size_t
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_head_node;
    dlistint_t *head2 = *head;

    while (head2 != NULL)
        head2 = head2->next;
	new_head_node = malloc(sizeof(dlistint_t));
	if (new_head_node == NULL)
		return (NULL);
	new_head_node->n = n;
	new_head_node->prev = *head;
	new_head_node->next = NULL;
	if ((*head) != NULL)
		(*head)->next = new_head_node;
	return (new_head_node);
}
