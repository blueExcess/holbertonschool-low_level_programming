/* 0. allocate memory using malloc() and check if null */
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - run malloc() and check if failure
 * @b: space to allocate
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit (98);

	return (p);
}
