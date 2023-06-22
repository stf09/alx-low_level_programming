#include "main.h"

void print_numbers(void);

/**
 * print_numbers - prints the numbers, from 0 to 9
 *
 * Return: none
 */

void print_numbers(void)
{

	int a = '0';
	for(; a <= '9'; a++)
		_putchar(a);
	_putchar('\n');
}
