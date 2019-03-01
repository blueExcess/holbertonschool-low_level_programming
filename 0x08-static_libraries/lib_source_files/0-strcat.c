/* 0. write a program to mimic function 'strcat()' */

#include "holberton.h"

/**
 * _strcat - concatonate two strings
 * @dest: destination
 * @src: source
 *
 * Return: character (dest)
 */
char *_strcat(char *dest, char *src)
{
	char *dest_length = dest, *src_length = src;
	int i = 0, j = 0, x = 0;

	while (*dest_length)
	{
		dest_length++;
		i++;
	}
	while (*src_length)
	{
		src_length++;
		x++;
	}

	for (; j <= x; i++, j++)
		dest[i] = src[j];
	return (dest);
}
