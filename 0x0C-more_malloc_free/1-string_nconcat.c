#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * @n: the first n bytes of s2.
 *
 * Return: concatented string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *temp;

	if (n < strlen(s2))
	{
		temp = malloc(strlen(s1) + n + 1);
	}
	else
	{
		temp = malloc(strlen(s1) + strlen(s2) + 1);

	}
	if (temp == NULL)
	{
		return (NULL);
	}
	if (n > strlen(s2))
	{
		n = strlen(s2);
	}
	strcpy(temp, s1);
	strncat(temp, s2, n);
	return (temp);
}
