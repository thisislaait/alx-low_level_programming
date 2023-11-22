#include "lists.h"
/**
 * pop_listint - pops a node out
 * @head: linked list address
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int n;

	current = *head;
	if (current == NULL)
		return (0);
	n = current->n;
	*head = current->next;
	free(current);
	return (n);
}

