#include "lists.h"

/**
 * listint_len - returns the number of elements of a linked lists
 * @h: linked list
 *
 * Return: len
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
