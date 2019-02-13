/* 9. print out 9's times table in matrix form */

#include "holberton.h"
/**
 * times_table - return formatted times table for 9
 *
 * Return: nothing
 */
void times_table(void)
{
	int n, x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			n = x * y;
			if (y == 0)
			{
				_putchar('0' + n);
				continue;
			}
			_putchar(',');
			_putchar(' ');
			if (n < 10)
			{
				_putchar(' ');
				_putchar('0' + n);
			}
			else if (n >= 10 && n < 100)
			{
				_putchar('0' + (n / 10));
				_putchar('0' + (n % 10));
			}
			else
			{
				_putchar('0' + (n / 100));
				_putchar('0' + ((n / 10) % 10));
				_putchar('0' + (n % 10));
			}
		}
		_putchar('\n');
	}
}
