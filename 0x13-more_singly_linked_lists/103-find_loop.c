#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: head of a list.
 *
 * Return: the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tmp;
	
	if (head)
	{
		while (head != NULL)
		{
			tmp = head;
			while (tmp != NULL)
			{
				if (tmp->next == head)
					return (tmp);
				tmp = tmp->next;
			}
			head = head->next;
		}	
	}
	return (NULL);
}
