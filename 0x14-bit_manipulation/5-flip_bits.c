#include "main.h"

/**
 * flip_bits - number of bits you would need to flip to
 * get from one number to another
 * @n: the first unit
 * @m: secondary unit
 * Return: number of bits you would need to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int s;
	unsigned long int f;
	unsigned long int i;

	s = sizeof(n) * 8 - 1;

	f = 0;
	i = 0;

	while (i <= s)
	{
		if ((n & 1) != (m & 1))
			f++;

		n = n >> 1;
		m = m >> 1;

		i++;
	}

	return (f);
}
