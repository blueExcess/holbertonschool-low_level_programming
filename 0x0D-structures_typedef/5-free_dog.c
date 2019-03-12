/* 5. Free dog */
#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog - free up memory from dog
 * @d: thing to free
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if(d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
