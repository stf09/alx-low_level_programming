#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates an array of integers.
 * @min: minimum integer
 * @max: maximum integer
 *
 * Return: pointer to the newly created error.
 */

int *array_range(int min, int max)
{
	int *temp;
	int i, j;

	if (min > max)
	{
		return (NULL);
	}

	j = max - min + 1;
	temp = malloc(sizeof(int) * j);
	if (temp == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++)
	{
		temp[i] = min++;
	}
	return (temp);
}
