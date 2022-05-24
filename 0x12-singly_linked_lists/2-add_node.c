#include "lists.h"
list_t *add_node(list_t **head, const char *str)
{
    char* t = strdup(str);
    if (t == NULL)
    {
        free (t);
        return (NULL);
    }
    /*(*head)->next = malloc(sizeof(list_t));
    if (((*head)->next) == NULL)
        free ((*head)->next);
        return (NULL);*/
    (*head)->next->str = t;
    free (t);
    return (*head);
}