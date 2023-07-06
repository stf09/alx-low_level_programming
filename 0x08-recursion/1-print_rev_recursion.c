#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _print_rev_recursion - prints in a string reverse.
 * @s: An input string.
 *
 * Return: none
 */

void _print_rev_recursion(char *s)
{

	if( *s )
	{
		_print_rev_recursion (s + 1);
		putchar (*s);
	}
}
