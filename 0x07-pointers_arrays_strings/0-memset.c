#include "main.h"
#include <string.h>

/**
 * _memset -  fills memory with a constant byte.
 * @s: A pointer to the starting location of a 
 * memory.
 * @b: character to be filled.
 * @n: the number of bytes
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
