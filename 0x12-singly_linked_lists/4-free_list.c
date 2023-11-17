#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - Frees a list and its strings.
 * @head: Pointer to the head of the list.
 */
void free_list(list_t *head)
{
    list_t *current = head;
    list_t *next;

    while (current != NULL)
    {
        next = current->next;  // Save the next node before freeing the current one
        free(current->str);    // Free the string
        free(current);         // Free the node
        current = next;        // Move to the next node
    }
}