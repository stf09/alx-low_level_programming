#include <stdio.h>

/**
 * main - Prints the alphbet in lowercase
 * print new line
 * then, print uppercase letters
 * Return:Always = 0;
 */
int main(void)
{
	char let;

	for (let = 'a'; let <= 'z'; let++)
	{
		putchar(let);
	}
	for  (let = 'A'; let <= 'Z'; let++)
	{
		putchar(let);
	}

	putchar('\n');
	return (0);
}
