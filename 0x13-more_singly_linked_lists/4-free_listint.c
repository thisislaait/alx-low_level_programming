#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees the list
 * @head: pointer to the head of the list
 *
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;


	while (head != NULL)
	{
		tmp = head;
		free(head);
		head = tmp->next;
	}

}