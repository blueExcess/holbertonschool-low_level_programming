/* 1. function to mimic 'memcpy()' */
#include "holberton.h"

/**
 * _memcpy - copy n bytes from src to dest
 * @dest: destination
 * @src: source
 * @n: number of bytes to copy
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *s = src, *d = dest;

	while (n > 0)
	{
		*d = *s;
		s++;
		d++;
		n--;
	}
	return (dest);
}
