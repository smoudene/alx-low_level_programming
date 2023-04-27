#include "lists.h"

/**
* print_list - print all elements of list.
* @h: name of the list
* Return: size of the list.
*/
size_t print_list(const list_t *h)
{
	int cp = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		cp++;
		h = h->next;
	}
	return (cp);
}
