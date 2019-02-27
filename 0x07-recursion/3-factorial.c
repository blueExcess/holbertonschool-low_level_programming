/* 3. function to give factorial */
#include "holberton.h"

/**
 * factorial - return the factorial of n
 * @n: factorial to give
 *
 * Return: answer
 */
int factorial(int n)
{
	if (n >= 1)
		return (n * factorial(n - 1));
	else if (n < 0)
		return (-1);
	else
		return (1);
}
