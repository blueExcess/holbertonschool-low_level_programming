/* 6. Print a line across the screen n wide */

#include "holberton.h"

/**
 * print_line - print a line n wide
 * @n: how wide to print
 *
 * Return: none
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i <= n; i++)
		_putchar('_');
	_putchar('\n');
}
