/* 12 (advanced) - print long int using _putchar() */

#include "holberton.h"

/**
 * print_number - print long in with putchar
 * @n: number to print
 *
 * Return: none
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
 * print_unumber - convert to unsigned int for printing
 * @n: value converted to unsigned
 *
 * Return: none
 */
void print_unumber(unsigned int n)
{
	if (n / 10)
		print_unumber(n / 10);
	_putchar('0' + n % 10);

}
