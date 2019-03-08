/* 3. create an array of integers from x to y in size */
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - create an array of ints
 * @min: starting point
 * @max: end point
 *
 * Return: pointer to int (beginning of array)
 */
int *array_range(int min, int max)
{
	int i, x = 0;
	int *p = malloc((max - min + 1) * sizeof(*p));

	if (p == NULL)
		return (NULL);

	if (min > max)
		return (NULL);

	for (i = min; i <= max; i++, x++)
		p[x] = i;

	return (p);
}
