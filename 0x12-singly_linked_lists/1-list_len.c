#include "lists.h"

/**
* list_len - returns number of elements of a l l
* @h: name of the list
* Return: number of elements
*/
size_t list_len(const list_t *h)
{
	int cp = 0;

	while (h)
	{
		cp++;
		h = h->next;
	}
	return (cp);
}
