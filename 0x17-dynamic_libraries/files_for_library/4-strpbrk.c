/* 4. search a string for a set of bytes */
#include "holberton.h"

/**
 * _strpbrk - search a string
 * @s: string to search
 * @accept: acceptable matches
 *
 * Return: remainder of string
 */
char *_strpbrk(char *s, char *accept)
{
	char *a = accept;

	while (*s)
	{
		while (*a)
		{
			if (*s == *a)
				return (s);
			a++;
		}
		a = accept;
		s++;
	}
	return (0);
}
