#include "main.h"

/**
 * set_bit - sets the value of bit to 1 at
 * the given index.
 * @n: the number
 * @index: the given index.
 * Return: 1 if it worked, or -1 if an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int s;
	unsigned long int k;

	s = sizeof(*n) * 8 - 1;

	if (index > s)
		return (-1);

	k = 1 << index;

	*n = k | *n;

	return (1);
}
