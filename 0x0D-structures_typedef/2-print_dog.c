/* 2. print struct dog */
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print structure
 * @d: structure to print
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	/* null check for elements */
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else if (d->name != NULL)
		printf("Name: %s\n", d->name);
	if (d->age == 0)
		puts("Age: 0.000000");
	else if (d->age != 0)
		printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		puts("Owner: (nil)");
	else if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);

}
