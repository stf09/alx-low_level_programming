#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - Prints a string in reverse
 * and in new line
 *
 * @s: An input string
 * Return: reversed string
 */

void print_rev(char *s)
{
	int i = 0;
	int a;

	while (s[i] != '\0')
	{
		i++;
	}

	for (a = i; a >= 0; a--)
	{
		printf("%c", s[a]);
	}
	printf("\n");
}


