/* 8. print square (#) n^2 */

#include "holberton.h"

/**
 * print_square - print a square n by n
 * @size: size of square
 *
 * Return: none
 */
void print_square(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
