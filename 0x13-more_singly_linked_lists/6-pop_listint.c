#include "lists.h"
/**
 * pop_listint - pops a node out
 * @head: linked list address
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
		int n;
		listint_t *tmp;
		
		tmp = *head
			if (*head == NULL)
				return (0);
		*head = tmp->next;
		n = tmp->n;
		free(tmp);
		return (n);
}
