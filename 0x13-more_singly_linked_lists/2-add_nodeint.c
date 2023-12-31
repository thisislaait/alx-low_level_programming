#include "lists.h"
/**
 * add_nodeint - adds a node at the beginning
 * @head: head of the list
 * @n: value to give new node
 * Return: address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}

