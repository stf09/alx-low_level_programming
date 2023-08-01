#include "lists.h"

/**
 * listint_len - lists the number of element in linked list.
 * @h: pointer to struct
 * Return: The number of elements.
 */

size_t listint_len(const listint_t *h)
{
	int add = 0;

	while (h != NULL)
	{
		add++;
		h = h->next;
	}
	return (add);
}
