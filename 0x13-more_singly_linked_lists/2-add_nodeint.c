#include "lists.h"
/**
 * add_nodeint - adds a node to the begn of a list
 *
 * @head: linked list
 * @n: string
 * Return: modified list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add;

	add = malloc(sizeof(listint_t));
	if (add == NULL)
		return (NULL);
	add->n = n;
	add->next = *head;
	*head = add;
	return (*head);
}
