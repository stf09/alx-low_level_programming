#include "main.h"
#include <math.h>

/**
 * _pow_recursion - raises the value of x to the 
 * powerof y.
 * @x: input int
 * @y: input int
 *
 * Return: the raised value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y-1));
}
