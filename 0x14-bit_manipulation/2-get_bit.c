#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns the value of a bit at a givrn index.
 * @n: the given number
 * @index: starts from zero to the bit.
 * Return: the value of a bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int s;

	s = sizeof(n) * 8 - 1;

	if (index > s)
	{
		return (-1);
	}

	return ((n >> index) & 1);

}
