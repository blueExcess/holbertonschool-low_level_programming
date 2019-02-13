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
	int x, y, a = n;

	for (x = 0; x < a; x++)
	{
		for (y = 0; y < a; y++)
		{
			a = x * y;
			if (y == 0)
			{
				_putchar('0' + a);
				continue;
			}
			_putchar(',');
			if (a < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + a);
			}
			else if (a >= 10 && a < 100)
			{
				_putchar('0' + (a / 10));
				_putchar('0' + (a % 10));
			}
			else
			{
				_putchar('0' + (a / 100));
				_putchar('0' + ((a / 10) % 10));
				_putchar('0' + (a % 10));
			}
		}
		_putchar('\n');
	}
}
