#include "lists.h"
/**
 * add_node_end - adds a node to the begn of a list
 *
 * @head: linked list
 * @str: string
 * Return: modified list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{	list_t *add, *temp;

	add = malloc(sizeof(listint_t));
	if (add == NULL)
		return (NULL);
	add->n = n;
	add->next = NULL;
	temp = *head;
	if (temp == NULL)
	{
		*head = add;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = add;
	}
	return (*head);
}
