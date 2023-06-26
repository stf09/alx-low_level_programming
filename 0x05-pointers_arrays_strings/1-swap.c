#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: Value of the first int
 * @b: Value of the second int
 *
 * Return: None
 */

void swap_int(int *a, int *b)
{

	int tmp = *a;

	*a = *b;
	*b = tmp;
}
