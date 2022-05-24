#include "lists.h"
/**
 * add_node - adds a node to the begn of a list
 * 
 * @head: linked list
 * @str: string 
 * Return: modified list
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *add;
    int k;

    add = malloc(sizeof(list_t));
    if (add == NULL)
        return (NULL);
    add->str = strdup(str);
    for ( k = 0; str[k]; k++)
    add->len = k;
    add->next = *head;
    *head = add;
    return (*head);

}