#include"main.h"

/**
 * _isdigit - checks for a digit (0 through 9).
 *
 * @c : An input integer
 * Return: 1 Returns 1 if c is a digit
 */

int _isdigit(int c)
{

	if((c >= 48) && (c <= 57))
		return (1);
	return (0);
}
