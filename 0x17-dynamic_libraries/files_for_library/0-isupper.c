/* 0. re-create function 'isupper()' */

#include "holberton.h"

/**
 * _isupper - determine if input is upper case
 * @c: input
 *
 * Return: 1 if true, 0 if false
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
