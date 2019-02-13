/* 12 (advanced) - print n times table */
#include "holberton.h"

/**
 * print_times_table - print n table
 * @n: times table to print
 *
 * Return: nothing
 */
void print_times_table(int n)
{
	int x, y, z;

	if (n > 15 || n < 0)
		return;

	for (x = 0; x < n; x++)
	{
		for (y = 0; y < n; y++)
		{
			z = x * y;
			if (y == 0)
			{
				_putchar('0' + z);
				continue;
			}
			_putchar(',');
			_putchar(' ');
			if (z < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + z);
			}
			else if (z >= 10 && z < 100)
			{
				_putchar(' ');
				_putchar('0' + (z / 10));
				_putchar('0' + (z % 10));
			}
			else
			{
				_putchar('0' + (z / 100));
				_putchar('0' + ((z / 10) % 10));
				_putchar('0' + (z % 10));
			}
		}
		_putchar('\n');
	}
}
