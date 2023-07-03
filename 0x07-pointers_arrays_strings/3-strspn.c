#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring.
 * @
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	int len;

	len = strspn(s, accept);
	return (len);
}
