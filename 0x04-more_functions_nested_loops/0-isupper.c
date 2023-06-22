#include "main.h"


/**
 * _isupper - checks whether an alphabet
 * is lowerCase
 * @c : an input integer
 *
 * Return: 1 if c is uppercase 0 otherwise
 */

int _isupper(int c)
{

	if ((c >= 65) && (c <= 90))
		return (1);
	return (0);
}
