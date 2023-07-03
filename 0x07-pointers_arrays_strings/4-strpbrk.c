#include "main.h"
#include <string.h>

/**
 * _strpbrk - searches a string for any subsets
 * @s: stirng
 * @accept: the subset
 *
 * Return: returns the count of characters shared.
 */

char *_strpbrk(char *s, char *accept)
{
	char *sha;

	sha = strpbrk(s, accept);
	return (sha);
}
