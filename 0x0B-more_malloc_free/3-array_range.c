#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

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
