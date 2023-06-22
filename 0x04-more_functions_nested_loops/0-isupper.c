#include "main.h"

int _isupper(int c);

/**
 * _isupper(int c) - checks whether an alphabet
 * is lowerCase
 * @c : an input integer
 *
 *
 * Returns 1 if c is uppercase
 * Returns 0 otherwise
 */

int _isupper(int c)
{

	if ((c >= 65) && (c <= 90))
		return 1;
	return 0;
}
