#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees a list and sets head to null
 * @head: Points to list head
 */
void free_listint2(listint_t **head)
{
		listint_t *freenode;
		listint_t *current;

		if (head == NULL)
		{	
			current = *head;
			while (current != NULL)
			{
				freenode = current;
				current = current->next;
				free(freenode);
			}
		*head = NULL;
		}
}

