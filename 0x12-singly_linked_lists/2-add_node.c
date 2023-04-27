#include "lists.h"

/**
 * add_node - add node begining of list
 * @head: pointer to structure
 * @str: string
 * Return: new element address or null
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	while (str[len] != '\0')
		len++;
	new->len = len;
	if (*head != NULL)
		new->next = *head;
	if (*head == NULL)
		new->next = NULL;
	*head = new;
	return (*head);
}
