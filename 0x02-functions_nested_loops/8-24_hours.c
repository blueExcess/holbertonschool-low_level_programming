/* 8. Print every minute of the day from 00:00 to 23:59 */

#include "holberton.h"

/**
 * jack_bauer - prints lots of numbers
 *
 * Return: 0 on success
 */
void jack_bauer(void)
{
	int x, y, z, a;

	for (x = '0'; x < '3'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			if (x == '2' && y == '4')
				break;
			for (z = '0'; z < '6'; z++)
			{
				for (a = '0'; a <= '9'; a++)
				{
					_putchar(x);
					_putchar(y);
					_putchar(':');
					_putchar(z);
					_putchar(a);
					_putchar('\n');
				}
				a = 0;
			}
			z = 0;
		}
		y = 0;
	}
}
