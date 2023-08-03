#include "main.h"

/**
 * clear_bit - sets the value of bit to zero at
 * a given index.
 * @n: the given number
 * @index: the index starting from zero toZbit
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int s, k;

	s = sizeof(*n) * 8 - 1;

	if (index > s)
		return (-1);

	k = 1 << index;

	*n = *n & ~k;

	return (1);
}
