#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees a list and sets head to null
 * @head: Pointer to head of the list
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		tmp = *head;
		free(*head);
		*head = tmp->next;
	}
	*head = NULL;
}