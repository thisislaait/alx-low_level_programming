#include "lists.h"
#include <stddef.h>

/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: Pointer to the head of list
 * Return: Number of elements
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}