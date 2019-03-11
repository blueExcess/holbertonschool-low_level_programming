/* 4. create a new dog from struct */
#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * count - count stuff
 * @s: string to count
 *
 * Return: length of string
 */
int count(char *s)
{
	char *p = s;
	int x = 0;

	while (*p)
	{
		p++;
		x++;
	}
	return (x);
}

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
	char *cpN, *cpO;
	int x = 0, y = 0, z = 0;
	dog_t *ret;

	x = count(name);
	y = count(owner);
	cpN = malloc(sizeof(cpN) * x);
	cpO = malloc(sizeof(cpO) * y);
	ret = malloc(sizeof(*ret));
	if (ret == NULL)
		return (NULL);
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
