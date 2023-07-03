#include "main.h"
#include <string.h>

/**
 * _strchr -  locates a character in a string
 * @s: string
 * @c: the character
 *
 * Return: chracter or null
 */

char *_strchr(char *s, char c)
{
	char *res;

	res = strchr(s, c);
	return (res);
}
