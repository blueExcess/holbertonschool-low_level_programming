/* 3. mimic function 'strcmp()' */

#include "holberton.h"

/**
 * _strcmp - compare two strings
 * @s1: first string to compare
 * @s2: second string
 *
 * Return: 0 if match, otherwise difference between ascii values of mismatch
 */
int _strcmp(char *s1, char *s2)
{
	char *c1 = s1, *c2 = s2;
	int x = 0;

	while (*c1 == *c2 && *c1)
	{
		c1++;
		c2++;
	}
	if (*c1 != *c2)
	{
		x = *c1 - *c2;
	}
	return (x);
}
