/* 2. mimic the function 'strncopy()' */

#include "holberton.h"

/**
 * _strncpy - mimic functionality of strncopy()
 * @dest: destination string
 * @src: source string
 * @n: something
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
