#include "main.h"

/**
 * void print_alphabet_x10 - Prints 10
 * times the alplhabet
 *
 * Return : Always Zero
 */

void print_alphabet_x10(void)
{

	char l;
	int i;
	for( i = 0; i < 9; i++)
	{
		for( l = 'a'; l < 'z'; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
	}
}
