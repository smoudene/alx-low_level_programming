#include "lists.h"

/**
* _strlen - return length of a string
* @str: string to count lenght
*
* Return: length of string
*/
int _strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;

	return (i);
}

/**
* add_node_end - add new node to the end of linked list
* @head: double pointer to a linked list
* @str: string to add to the new node
*
* Return: pointer to the new node or null
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(new->str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	temp = *head;

	while (temp->next)
	temp = temp->next;
	temp->next = new;
	return (new);
}
