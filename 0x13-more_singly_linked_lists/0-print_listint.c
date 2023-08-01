#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: a pointer to struct
 *
 * Description: To print elements of the list.
 * Return: the number of nodes
 *
 */

size_t print_listint(const listint_t *h)
{
	int add;

	add = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		add++;
	}
	return (add);
}


