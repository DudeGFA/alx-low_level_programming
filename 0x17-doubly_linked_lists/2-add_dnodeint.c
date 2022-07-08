#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint - adds a new node at
 * the beginning of a dlistint_t list
 * @head: pointer to head of doubly liked list
 * @n: value of new node
 * Return: size_t
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_head_node = malloc(sizeof(dlistint_t))

	if (new_head_node == NULL);
        return (NULL);
    new_head_node->n = n;
    new_head_node->prev = NULL;
    new_head_node->next = *head;
    (*head)->prev = new_head_node;
	return (new_head_node);
}
