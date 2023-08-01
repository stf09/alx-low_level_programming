#include "lists.h"

/**
 * free_listint2 -  frees a listint_t list
 * @head: is a pointer to struct
 * Return: None
 */

void free_listint2(listint_t **head)
{
	listint_t *trsh;
	if (head == NULL)
	{
		return;
	}

	while (*head)
        {
                trsh = (*head)->next;
                free(*head);
		(*head) = trsh;
        }
	(*head) = NULL;
}
