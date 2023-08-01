#include "lists.h"
#include <stdlib.h>

/**
 * *add_nodeint - adds a new node at the beginning.
 * @head: pointer to the struct
 * @n: the value of the data to be stored.
 * Return: the address of the new elt or
 * NULL if it fails.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *net;

	net = malloc(sizeof(listint_t));
	if (net == NULL)
	{
		return (NULL);
	}
	net->n = n;
	net->next = *head;
	*head = net;

	return (net);
}
