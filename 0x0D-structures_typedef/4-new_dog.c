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

	ret = malloc(sizeof(ret));
	if (ret == NULL)
		return (NULL);
	ret->name = NULL;
	cpN = countAndPoint(name);
	if (cpN == NULL)
	{
		free(ret);
		return (NULL);
	}
	ret->name = cpN;
	cpO = countAndPoint(owner);
	ret->owner = NULL;
	if (cpO == NULL)
	{
		free(ret->name);
		free(ret);
		return (NULL);
	}
	ret->owner = cpO;
	ret->age = age;
	return (ret);
}
