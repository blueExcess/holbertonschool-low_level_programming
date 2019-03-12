/* 4. create a new dog from struct */
#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * countAndPoint - count stuff then point
 * @s: string to count
 *
 * Return: length of string and copy
 */
char *countAndPoint(char *s)
{
	char *p = s;
	int x = 0, z = 0;

	if (s == NULL)
		return (NULL);
	while (s[x])
	{
		x++;
	}
	p = malloc(sizeof(*p) * (x + 1));
	if (p == NULL)
		return (NULL);
	while (s[z])
	{
		p[z] = s[z];
		z++;
	}
	p[z] = '\0';
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

	ret = malloc(sizeof(*ret));
	if (ret == NULL)
		return (NULL);
	/* ret->name = NULL; */
	if (name)
	{
		cpN = countAndPoint(name);
		if (cpN == NULL)
		{
			free(cpN);
			free(ret);
			return (NULL);
		}
		ret->name = cpN;
		free(cpN);
	}
	/* ret->owner = NULL; */
	if (owner)
	{
		cpO = countAndPoint(owner);
		if (cpO == NULL)
		{
			free(cpO);
			free(ret->name);
			free(ret);
			return (NULL);
		}
		ret->owner = cpO;
		free(cpO);
	}
	if (age > 0.0)
		ret->age = age;
	return (ret);
}
