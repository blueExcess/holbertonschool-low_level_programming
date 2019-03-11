/* 4. create a new dog from struct */
#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * countAndPoint - count stuff then point
 * @s: string to count
 *
 * Return: length of string
 */
char *countAndPoint(char *s)
{
	char *p = s;
	int x = 0, z = 0;

	if (s == NULL)
		return (NULL);
	while (*p)
	{
		p++;
		x++;
	}
	p = s;
	p = malloc((sizeof(*p) * x) + 1);
	while (z <= x)
	{
		p[z] = s[z];
		z++;
	}
	p[z] = 0;
	return (p);
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
	dog_t *ret;

	cpN = countAndPoint(name);
	if (cpN == NULL)
	{
		free(cpN);
		return (NULL);
	}
	cpO = countAndPoint(owner);
	if (cpO == NULL)
	{
		free(cpO);
		return (NULL);
	}
	ret = malloc(sizeof(*ret));
	if (ret == NULL)
	{
		free(ret);
		return (NULL);
	}
	ret->name = cpN;
	ret->age = age;
	ret->owner = cpO;
	return (ret);
}
