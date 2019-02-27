/* 4. function to return value of x to power of y */
#include "holberton.h"

/**
 * _pow_recursion - return value of x to power of y
 * @x: value to raise
 * @y: raise to this power
 *
 * Return: value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y)
		return (x * _pow_recursion(x, y - 1));
	return (1);
}
