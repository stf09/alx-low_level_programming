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
	char *res = malloc(14);

	strcpy(res, src);
	strcat(res, dest);
	return (res);

}
