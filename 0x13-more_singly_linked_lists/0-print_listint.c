#include "lists.h"

/**
 * print_listint - prints elements of a linked list.
 * @h: head of the list
 * Return: length
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t cp = 0;

	while (cursor != NULL)
	{
		printf("%d\n", cursor->n);
		cp += 1;
		cursor = cursor->next;
	}
	return (cp);
}
