#include <stdio.h>

/**
 * main - Prints the alphbet in lowercase
 * except for e and q.
 * then, prints newline
 * Return:Always = 0;
 */
int main(void)
{
	char let;

	for (let = 'a'; let <= 'z'; let++)
	{
		if (let != 'q' && let != 'e')
		{
			putchar(let);
		}
	}
	putchar('\n');
	return (0);
}
