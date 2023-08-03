#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a num.
 * @n: an input number.
 * Return: none
 */

void print_binary(unsigned long int n)
{

	signed long int size;
	char c;
	int f;

	size = sizeof(n) * 8 - 1;

	if (n == 0)
	{
		printf("0");
		return;
	}
	if (n == 1)
	{
		printf("1");
		return;
	}
	f = 0;

	while (size >= 0)
	{
		c = (n >> size) & 1;

		if (f == 1)
			putchar(c + '0');
		else
		{
			if (c == 1)
			{
				putchar(c + '0');
				f = 1;
			}
		}

		size -= 1;
	}
}
