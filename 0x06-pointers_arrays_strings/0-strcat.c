#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _strcat - a function that
 * concatenates two strings
 * @dest: dest char
 * @src: src char
 *
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int l = strlen(src);
	int n = strlen(dest);
	char *res = malloc(n + l + 1);

	strcpy(res, src);
	strcat(res, dest);
	return (res);

}
