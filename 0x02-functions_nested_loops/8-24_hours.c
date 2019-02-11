/* 8. Print every minute of the day from 00:00 to 23:59 */

#include "holberton.h"

/**
 * jack_bauer - prints lots of numbers
 *
 * Return: 0 on success
 */
void jack_bauer(void)
{
	int x, y;

	for (x = '0'; x < '25'; x++)
	{
		for (y = '0'; y < '60'; y++)
		{
			_putchar(x);
			_putchar(y);
			_putchar('\n');
		}
		y = 0;
	}
}
