#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints the chessboard.
 * @a - an array
 *
 * Return: concatenates string.
 */

void print_chessboard(char (*a)[8])
{
	int c,b;

	for (c=0; c < 8; c++)
	{
		for (b = 0; b < 8; b++)
		{
			putchar(a[c][b]);
		}
		putchar('\n');
	}
}
