#include "lists.h"

/**
 * get_nodeint_at_index - searches for the ninth node.
 * @head: pointer to struct
 * @index: the index of the node.
 * Return: The ninth node or NULL if doesn't exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nw;

	if ((head) == NULL)
	{
		return (NULL);
	}
	while (head)
	{
		head = head->next;
		index++;
		if (index == 9)
		{
			break;
		}
	}
	nw = head;
	return (nw);
}
