/* 4. create a new dog from struct */
#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create new structure
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *n = name, *o = owner, *cpN, *cpO;
	int x = 0, y = 0, z = 0;
	dog_t *ret;

	if (name == NULL || owner == NULL)

	while (*n)
	{
		n++;
		x++;
	}
	while (*o)
	{
		o++;
		y++;
	}
	cpN = malloc(sizeof(cpN) * x);
	cpO = malloc(sizeof(cpO) * y);
	ret = malloc(sizeof(*ret));
	n = name;
	o = owner;
	while (z <= x)
	{
		cpN[z] = name[z];
		z++;
	}
	z = 0;
	while (z <= y)
	{
		cpO[z] = owner[z];
		z++;
	}

	ret->name = name;
	ret->age = age;
	ret->owner = owner;
	return (ret);
}
