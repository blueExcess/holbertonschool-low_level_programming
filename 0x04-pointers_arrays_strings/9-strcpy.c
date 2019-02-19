/* 9. write a function to mimic 'strcopy()' */

#include "holberton.h"

/**
 * *_strcpy - copy a string from one array to another
 * @dest: destination location
 * @src: string to copy
 *
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	return (dest);
}
