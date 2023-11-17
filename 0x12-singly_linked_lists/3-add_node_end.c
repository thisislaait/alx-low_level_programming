#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a node at the end of a linked list.
 * @head: Pointer to the head of the list.
 * @str: String to add to the new node.
 * Return: Address of the new node or NULL if it fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
    int i = 0;
    list_t *new, *temp;

    while (str[i])
        i++;

    new = malloc(sizeof(list_t));
    if (new == NULL)
        return (NULL);

    new->str = strdup(str);
    if (new->str == NULL)
    {
        free(new);
        return (NULL);
    }

    new->len = i;
    new->next = NULL;

    if (*head == NULL)
    {
        *head = new;
    }
    else
    {
        temp = *head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = new;
    }

    return (new);
}