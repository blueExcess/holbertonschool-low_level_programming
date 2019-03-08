#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *p, *x;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	x = p;

	if (p == NULL)
		return (NULL);

	/* while (i < nmemb * size) */
	/* { */
	/* 	*x = 0; */
	/* 	x++; */
	/* 	i++; */
	/* } */
	for (i = 0; i < (nmemb * size); i++, x++)
		*x = 0;

	return (p);
}
