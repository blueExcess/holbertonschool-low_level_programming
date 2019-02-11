/* 2. Print alphabet 10x */

#include "holberton.h"

/**
 * print_alphabet_x10 - prints alphabet 10x
 *
 * Return: 0 always
 */
void print_alphabet_x10(void)
{
	int x, i;

	for (i = 0; i < 10; i++)
	{
		for (x = 'a'; x <= 'z'; x++)
			_putchar(x);
		_putchar('\n');
	}
	return (0);
}
