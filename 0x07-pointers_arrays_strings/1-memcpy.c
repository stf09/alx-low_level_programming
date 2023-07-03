#include "main.h"
#include <string.h>

/**
 * _memcpy - copies memory of data
 * @dest: dest
 * @src: source
 * @n: unsigned int
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
