/* 6. (file listed as 7) write a function that prints a 2D array */
#include "holberton.h"

/**
 * print_chessboard - print a 2D array
 * @a: pointer to characters
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int x, y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
		{
			_putchar((*a)[y]);
		}
		_putchar('\n');
		a++;
	}
}
