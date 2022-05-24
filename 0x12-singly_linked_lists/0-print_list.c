#include "lists.h"
#include <stdio.h>
/**
 *print_list - prints the members of a list
 *
 *@h: pointer to a linked list
 *Return: size_t
 */
size_t print_list(const list_t *h)
{
    int i = 1;

    if (h)
    {
        if (h != NULL)
        {
            if (h->str != NULL)
                printf("[%d] %s\n", h->len, h->str);
            else
                printf("[0] (nil)\n");
            return (i + print_list(h->next));
        }
    }
    return (0);
    

}
