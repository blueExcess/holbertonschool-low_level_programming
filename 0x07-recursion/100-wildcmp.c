/* 8 (advanced) check if two strings */
#include "holberton.h"

/**
 * wildcmp - match two strings and pretend to do a wildcard
 * @s1: string 1
 * @s2: string 2
 *
 * Return: int
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == 0)
	{
		if (*s2 == '*')
			return (wildcmp(s1, s2 + 1));
	return (*s2 == 0);
	}
	if (*s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}
