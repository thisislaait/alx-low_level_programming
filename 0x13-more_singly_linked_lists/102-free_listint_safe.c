#include "lists.h"
#include <stdlib.h>

/**
 * free_listp2 - frees a linked list safely
 * @head: head of a list.
 *
 * Return: size of list that is free
 */
size_t free_listint_safe(listint_t **h)
{
	int i, flag = 0;
	listint_t *slow, *fast, *delete;

	if (!h)
		return (0);

	for (i = 0; *h && !flag; i++)
	{
		slow = *h;
		fast = (**h).next;
		while (slow != fast)
		{
			if (slow)
				slow = (*slow).next;
			if (fast)
				fast = (*fast).next;
			if (fast == *h)
				flag = 1;
			if (fast)
				fast = (*fast).next;
			if (fast == *h)
				flag = 1;
		}
		delete = *h;
		*h = (**h).next;
		free(delete);
	}

	while (flag && *h != fast)
	{
		delete = *h;
		i++;
		*h = (**h).next;
		free(delete);
	}
	*h = NULL;
	return (i);
}