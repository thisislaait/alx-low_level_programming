#include "lists.h"
/**
 * listint_len - Returns the number of elements in linked lists
 * @h: Pointer to head of the list
 * Return: amount of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}

