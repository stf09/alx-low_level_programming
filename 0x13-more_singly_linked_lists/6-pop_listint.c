#include "lists.h"

/**
 * pop_listint - deletes the head node and
 * @head: pointer to the struct
 * Return: returns the head's node.
 */

int pop_listint(listint_t **head)
{
	listint_t *delhead;
	int h;

	if (head == NULL)
	{
		return (0);
	}
	h = (*head)->n;
	delhead = (*head);
	*head = (*head)->next;
	free(delhead);
	return (h);
}
