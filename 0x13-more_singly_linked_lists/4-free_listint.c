#include "lists.h"
/**
 * free_listint - frees the list
 * @head: points to head
 * Return:void
 */
void free_listint(listint_t *head)
{
	listint_t *tmp *t;

	t =head;
	while (t != NULL)
	{
		tmp = t->next;
		free(t);
		t = tmp;
	}
}