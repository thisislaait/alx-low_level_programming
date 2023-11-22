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
	listint_t *p;
	listint_t *n;

	p = NULL;
	n = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = n;
	}

	*head = p;
	return (*head);
}

