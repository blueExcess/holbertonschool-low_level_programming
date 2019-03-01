/* 2. Return length of a string */
#include "holberton.h"

/**
 * _strlen_recursion - find length of string
 * @s: string to measure
 *
 * Return: int
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
