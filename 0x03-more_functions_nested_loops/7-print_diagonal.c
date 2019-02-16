/* 7. print diagonal line n length */

#include "holberton.h"

/**
 * print_diagonal - print diagonal line n length
 * @n: width
 *
 * Return: none
 */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (x = 0; x < n; x++)
	{
		for (y = 0; y < x; y++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
