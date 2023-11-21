#include <stdlib.h>
#include "lists.h"

/**
  * reverse_listint - reverse a linked list
  * @head: Pointer to head of list
  *
  * Return: Pointer to first node
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	if (head)
	{
		while (*head)
		{
			next = *head;
			*head = (*head)->next;
			next->next = prev;
			prev = next;
		}

		*head = prev;
		return (*head);
	}
	return (NULL);
}