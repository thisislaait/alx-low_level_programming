#include "lists.h"

/**
 * print_listint_safe - Prints a linked list
 * @head: head of a list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	int i, flag = 0;
	listint_t *slow, *fast;

	if (!head)
		exit(98);
	for (i = 1; (*head).next && !flag; head = (*head).next, i++)
	{
		if ((*head).next)
			slow = (*head).next;
		if ((*head).next->next)
			fast = (*head).next->next;
		while (slow != fast)
		{
			if (slow)
				slow = (*slow).next;
			if (fast == head)
				flag = 1;
			if (fast && !flag)
				fast = (*fast).next;
			if (fast == head)
				flag = 1;
			if (fast && !flag)
				fast = (*fast).next;
			if (fast == head)
				flag = 1;
		}
		printf("[%p] %d\n", (void *)head, (*head).n);
	}

	for (; flag && (*head).next != fast; i++, head = (*head).next)
		printf("[%p] %d\n", (void *)head, (*head).n);
	printf("[%p] %d\n", (void *)head, (*head).n);
	if (fast)
		printf("-> [%p] %d\n", (void *)fast, (*fast).n);
	return (i);
}

