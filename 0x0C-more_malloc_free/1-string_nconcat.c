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

	temp = malloc(strlen(s1) + strlen(s2) + 1);
	strcpy(temp, s1);
	strncat(temp, s2, n);
	return (temp);
}
