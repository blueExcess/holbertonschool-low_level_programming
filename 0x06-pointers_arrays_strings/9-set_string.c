/* 8. (9- file) set value of a pointer to a char */
#include "holberton.h"

/**
 * set_string - set pointer to a char
 * @s: something
 * @to: something else
 *
 * Return: null
 */
void set_string(char **s, char *to)
{
	*s = to;
}
