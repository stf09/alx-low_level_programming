#include "main.h"
#include <stdio.h>

/*  prototype */
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
		/* Usage of _putchar() */
		putchar(a);
 	putchar('\n');
}
