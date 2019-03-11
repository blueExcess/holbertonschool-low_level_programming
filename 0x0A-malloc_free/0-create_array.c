/* 0. create an array of characters */
#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create an array using malloc()
 * @size: size of array
 * @c: character to initialize array with
 *
 * Return: pointer to char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *p = malloc(size * sizeof(p));

	if (size == 0 || p == NULL)
		return (NULL);
	for (x = 0; x <= size; x++)
	{
		p[x] = c;
	}

	return (p);
}
