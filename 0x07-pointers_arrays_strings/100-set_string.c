#include "main.h"
#include <string.h>

/**
 * set_string - sets the value of a pointer to a char
 * @s: the value setted
 * @to: the value to be changed
 *
 * Return: a substituted value
 */

void set_string(char **s, char *to)
{
	*s = to;
}
