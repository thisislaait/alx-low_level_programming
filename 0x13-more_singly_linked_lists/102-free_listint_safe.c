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
        size_t size = 0;
	    listint_t *slow, *fast, *temp;

	    if (h == NULL || *h == NULL)
		    return (0);

	    slow = *h;
	    fast = (*h)->next;

	    while (fast && fast < slow)
	    {
		    temp = fast->next;
		    free(fast);
		    size++;
		    fast = temp;

		    if (fast)
			    fast = fast->next;

		    if (fast)
			    fast = fast->next;

		    slow = slow->next;
	    }

	    while (fast && *h != fast)
	    {
		    temp = *h;
		    *h = (*h)->next;
		    free(temp);
		    size++;
	    }

	    *h = NULL;
	    return (size);
}