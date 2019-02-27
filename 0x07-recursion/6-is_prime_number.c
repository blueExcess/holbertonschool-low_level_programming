/* 6. test to see if number is prime */
#include "holberton.h"


/**
 * test - test to see if number is prime and increment x
 * @x: number to test against n
 * @n: number to determine if prime
 *
 * Return: something
 */
int test(int x, int n)
{
	if (x > (n / 2))
		return (1);
	else if (n % x)
		return (test(x + 1, n));
	else
		return (0);
}

/**
 * is_prime_number - test to see if number is prime
 * @n: number to test
 *
 * Return: 1 if prime, else 0
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	else if (n > 1)
		return (test(2, n));
	else
		return (0);
}
