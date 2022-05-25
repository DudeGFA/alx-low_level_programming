#include "lists.h"
/**
 * add_node_end - adds a node to the begn of a list
 *
 * @head: linked list
 * @str: string
 * Return: modified list
 */
list_t *add_node_end(list_t **head, const char *str)
{	list_t *add, *temp;
 	int k;

 	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	add->str = strdup(str);
	for (k = 0; str[k]; k++)
	add->len = k + 1;
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
