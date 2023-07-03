#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: array elements
 * @size: array elements
 *
 * Return: None
 */

void print_diagsums(int *a, int size)
{
	int x;
	int sumL, sumR;

	sumL = 0;
	sumR = 0;
	for (x = 0; x < size; x++)
	{
		sumL += a[x * size + x];
		sumR += a[x * size + (size - x - 1)];
	}
	printf("%d, %d\n", sumL, sumR);
}
