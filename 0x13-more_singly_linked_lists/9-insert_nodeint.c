#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given
 * position.
 * @head: a poointer to struct
 * @idx: index of wher the new node should be added
 * @n: the new node's data
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *cur;
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
	{
		return (NULL);
	}
	tmp->n = n;
	cur = *head;

	if (idx == 0)
	{
		tmp->next = *head;
		*head = tmp;
		return (*head);
	}

	while (cur != NULL)
	{
		if (i == idx - 1)
		{
			tmp->next = cur->next;
			cur->next = tmp;
		}
		i++;
		cur = cur->next;
	}
	if (idx > i)
	{
		return (NULL);
	}
	return (tmp);
}		
