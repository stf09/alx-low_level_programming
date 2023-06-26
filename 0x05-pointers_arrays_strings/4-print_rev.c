#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - Prints a string in reverse
 * and in new line
 *
 * @s: An input string
 * Return: ing
 */

void print_rev(char *s)
{
	int i = 0;
	int a;

	while (s[i] != '\0')
	{
		i++;
	}

	for (a = i - 1; a >= 0; a--)
	{
		putchar(s[a]);
	}
	putchar('\n');
}


