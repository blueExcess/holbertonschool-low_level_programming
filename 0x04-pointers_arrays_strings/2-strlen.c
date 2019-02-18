/* 2. write a function to replace strlen() */

#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: string to measure
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while(*s)
	{
		s++;
		length++;
	}

	return (length);
}
