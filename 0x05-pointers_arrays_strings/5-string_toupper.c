/* 5. function that changes all lowercase letters of string to uppercase */

#include "holberton.h"

/**
 * string_toupper - convert lowercase characters to uppercase
 * @s: string to modify
 *
 * Return: string
 */
char *string_toupper(char *s)
{
	char *position = s;

	while (*position)
	{
		if (*position >= 'a' && *position <= 'z')
			*position -= 32;
		position++;
	}

	return (s);
}
