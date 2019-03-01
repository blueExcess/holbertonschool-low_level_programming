/* 2. function to mimic 'strchr()' */
#include "holberton.h"

/**
 * _strchr - return pointer to first occurance of c in string
 * @s: string to check
 * @c: character to find
 *
 * Return: string from point of find - null if no match
 */
char *_strchr(char *s, char c)
{
	while (*s != c)
	{
		if (*s == 0)
			return (0);
		s++;
	}
	return (s);
}
