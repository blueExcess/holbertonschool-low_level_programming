/* 1. mimic function strncat() - copy from source only to n bytes */

#include "holberton.h"

/**
 * _strncat - concatenate two strings to n bytes
 * @dest: destination array
 * @src: source
 * @n: how many bytes of src to use
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *sub_dest = dest;
	int i = 0;

	while (*sub_dest)
		sub_dest++;
	while (i < n && *src)
	{
		*sub_dest = *src;
		src++;
		sub_dest++;
		i++;
	}
	if (*sub_dest)
		*sub_dest = '\0';
	return (dest);
}
