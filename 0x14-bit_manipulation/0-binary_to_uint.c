#include "main.h"

/**
 * binary_to_uint - converts a binary number into unsigned int
 * @b: a pointer of string fo ones and zeroes.
 * Return: the convered number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec;
	unsigned int i;

	if (b == NULL)
	{
		return (0);
	}

	for (dec = 0, i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
			dec = (dec << 1) | 1;
		else if (b[i] == '0')
			dec <<= 1;
		else if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	return (dec);
}
