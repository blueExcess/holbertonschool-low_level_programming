/* 7. Print last digit of a number */

#include "holberton.h"

/**
 * print_last_digit - print out last digit of number
 * @n: number to see
 *
 * Return: 0 on success
 */
int print_last_digit(int n)
{
	int x;

	if (n < 0)
		n = -n;

	x = n % 10;
	_putchar('0' + x);
	return (x);
}
