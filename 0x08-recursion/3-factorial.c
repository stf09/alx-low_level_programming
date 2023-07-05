#include "main.h"
#include <stdio.h>

/**
 * factorial - returns the factorial of
 * a given number
 * @n: An input integer.
 *
 * Return: -1 if n is negative or 1 if
 * the number is 0.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
