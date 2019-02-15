/* 1. create function to mimic isdigit() */

#include "holberton.h"

/**
 * _isdigit - determine if input is digit
 * @c: input
 *
 * Return: 1 if true, else 0
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
