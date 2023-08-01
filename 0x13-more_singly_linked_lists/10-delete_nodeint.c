#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: pointer
 * @index: index of the node to be deleted
 * Retunr: if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cursor, *c_next;
	unsigned int count = 0;

	cursor = *head;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = cursor->next;
		free(cursor);
		return (1);
	}
	if (index == 1)
	{
		cursor = (*head)->next;
		(*head)->next = cursor->next;
		free(cursor);
		return (1);
	}
	while (count < index - 1)
	{
		if (cursor->next == NULL)
			return (-1);
		count++;
		cursor = cursor->next;
		c_next = cursor->next;
	}
	cursor->next = c_next->next;
	free(c_next);

	return (1);
}

