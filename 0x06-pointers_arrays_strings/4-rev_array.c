#include "main.h"
#include <string.h>

/**
 * reverse_array - reverses the content of an
 * array of integers.
 * @a: an integer pointer
 * @n: number of elts in array.
 */

void reverse_array(int *a, int n)
{
	int b, temp;

	for (b = 0; b < n / 2; b++)
	{
		temp = a[b];
		a[b] = a[n - b - 1];
		a[n - b - 1] = temp;
	}
}
