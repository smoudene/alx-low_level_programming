#include "lists.h"

/**
 * print_listint - prints elements of a linked list.
 * @h: head of the list
 * Return: number of node.
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *c = h;
	size_t cp = 0;

	while (c != NULL)
	{
		printf("%d\n", cursor->n);
		cp += 1;
		c = c->next;
	}
	return (cp);
}
