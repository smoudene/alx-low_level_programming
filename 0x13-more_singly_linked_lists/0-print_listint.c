#include "lists.h"

/**
  * print_listint - Prints elements of a linked list
  * @h: The head of the linked list
  *
  * Return: Null or num of nodes
  */
size_t print_listint(const listint_t *h)
{
	size_t cp = 0;

	if (h != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			cp++;
		}
	}

	return (cp);
}
