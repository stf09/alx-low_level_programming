#include "lists.h"

/**
 * free_listint - frees a list.
 * @head: a pointer to the linked list.
 * Return: none
 */

void free_listint(listint_t *head)
{
	listint_t *trsh;

	while (head != NULL)
	{
		trsh = head->next;
		free(head);
		head = trsh;
	}
}
