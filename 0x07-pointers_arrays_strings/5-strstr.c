#include "main.h"
#include <string.h>

/**
 * _strstr -  locates a substring.
 * @haystack: string
 * @needle: substring
 *
 * Return: the substring if it's in the string.
 */

char *_strstr(char *haystack, char *needle)
{
	char *sub;

	sub = strstr(haystack, needle);
	return (sub);
}
