#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: the input string
 *
 * Return: NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *str1;
	char *str2;

	str1 = str;
	str2 = strdup(str1);

	if (str2 == NULL)
	{
		return (NULL);
	}
	return (str2);
	free(str2);
}
