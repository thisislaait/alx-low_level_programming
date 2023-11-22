#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees a list and sets head to null
 * @head: Points to list head
 * Return: void
 */
void free_listint2(listint_t **head)
{
		listint_t *tmp;

		if (head == NULL)
			return;
		while (*head)
		{
			tmp = *head;
			free(tmp);
			*head = (*head)->next;
		}
		head = NULL;
}

