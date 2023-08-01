#include "lists.h"

/**
 * sum_listint - returns the sum of
 * all the data
 * @head: pointer to a struct
 * Description: returns the sum
 * Return: the sum of all data.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}

