#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees a list and sets head to null
 * @head: Points to list head
 */
void free_listint2(listint_t **head)
{
	listint_t *killnode;
	listint_t *current;

	if (head != NULL)
	{
		current = *head;
		while (current != NULL)
		{
			killnode = current;
			current = current->next;
			free(killnode);
		}
		*head = NULL;
	}
}

