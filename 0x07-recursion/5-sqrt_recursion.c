/* 5. function to return sqroot of natural number */
#include "holberton.h"

/**
 * inc - increment the values of x and test against n
 * @x: value of x
 * @n: value of n (const)
 *
 * Return: value of x
 */
int inc(int x, int n)
{
	if ((x * x) < n)
		return (inc(x + 1, n));
	else if ((x * x) == n)
		return (x);
	else
		return (-1);
}


/**
 * _sqrt_recursion - return sqrt
 * @n: number to find sqrt of
 *
 * Return: value
 */
int _sqrt_recursion(int n)
{
	return (inc(0, n));
}
