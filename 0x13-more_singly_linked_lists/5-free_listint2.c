#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees a list and sets head to null
 * @head: Pointer to head of the list
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *tmp;

	if (head == NULL)
		return;

    current = *head;
	while (*head != NULL)
	{
		tmp = current;
		free(tmp);
		current = current->next;
	}
	*head = NULL;
}