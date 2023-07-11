#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first characters
 * @s2: the concatenated characters
 *
 * Return: concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2;
	char *s3;

	if (s1 == NULL)
	{
		return (NULL);
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	s3 = malloc(sizeof(char) * (len1 + len2) + 1);
	s3 = strcat(s3, s1);
	s3 = strcat(s3, s2);
	return (s3);
	free(s3);
}
