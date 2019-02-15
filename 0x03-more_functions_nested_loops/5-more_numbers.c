/* 5. print numbers from 0 to 14 10x */

#include "holberton.h"

/**
 * more_numbers - print from 0 to 14
 *
 * Return: none
 */
void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for(y = 0; y < 15; y++)
		{
			if(y > 9)
				_putchar('0' + (y / 10));
			_putchar('0' + (y % 10));
		}
		_putchar('\n');
	}
}
