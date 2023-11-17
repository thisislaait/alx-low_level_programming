#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * free_list - Frees a list and its strings.
 * @head: Pointer to the head of the list.
 */
void free_list(list_t *head)
{
    list_t *temp;

    while (head != NULL)
    {
        temp = head->next;
        free(head->str);
        free(head);
        head = temp;
    }
}