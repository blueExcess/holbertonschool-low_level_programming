/* 9 (advanced) - print integer using _putchar() */

#include "holberton.h"

/**
 * print_number - print a number
 * @n: number to print
 *
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	print_unumber((unsigned int) n);
}

/**
 * print_unumber - typecast to unsigned int for printing
 * @n: value to be converted
 *
 * Return: void
 */
void print_unumber(unsigned int n)
{
	if (n / 10)
		print_unumber(n / 10);
	_putchar('0' + n % 10);
}
