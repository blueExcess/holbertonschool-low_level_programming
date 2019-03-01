/* 6. compute absolute value of int */

#include "holberton.h"

/**
 * _abs - return absolute value
 * @n: number to test/return
 *
 * Return: absolute value
 */
int _abs(int n)
{
	if (n > 0)
		return (n);
	n = -n;
	return (n);
}
