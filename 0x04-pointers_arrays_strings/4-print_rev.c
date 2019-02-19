/* 4. Print string in reverse */

#include "holberton.h"

/**
 * print_rev - print string in reverse
 * @s: string to reverse
 *
 * Return: none
 */
void print_rev(char *s)
{
	int length = 0, i;

	while (*s)
	{
		s++;
		length++;
	}

	s--;
	for (i = length; i >= 1; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar(10);
}
