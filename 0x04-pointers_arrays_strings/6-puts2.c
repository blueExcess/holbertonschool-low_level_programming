/* 6. Print out every other word from a string */

#include "holberton.h"

/**
 * puts2 - print every other character
 * @str: string to print
 *
 * Return: none
 */
void puts2(char *str)
{
	int position;

	while (*str)
	{
		position++;
		if (position % 2)
			_putchar(*str);
		str++;
	}
	_putchar('\n');
}
