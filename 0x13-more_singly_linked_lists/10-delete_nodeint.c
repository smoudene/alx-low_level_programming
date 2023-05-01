#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int cp = 1;
	listint_t *new = *head, *temp;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		*head = new->next;
		free(new);
		return (1);
	}

	temp = *head;
	while (temp)
	{
		if (cp == index)
		{
			new = temp->next;
			temp->next = new->next;
			free(new);
			return (1);
		}

		temp = temp->next;
		cp++;
	}

	return (-1);
}
