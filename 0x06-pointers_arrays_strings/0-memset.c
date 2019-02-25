/* 0. make function to mimic 'memset()' */
#include "holberton.h"

/**
 * _memset - fill first n bytes of *s with char b
 * @s: target string
 * @b: character to fill memory with
 * @n: how many bytes of n to fill with b
 *
 * Return: characters
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;
	char *str = s;

	while (x < n)
	{
		*str = b;
		str++;
		x++;
	}
	return (s);
}
