/* 0. recursive function that prints a string followed by a newline */
#include "holberton.h"

/**
 * _puts_recursion - mimic puts via recursion
 * @s: string to print
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	char c;

	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	c = *s;
	_putchar(c);
	_puts_recursion(++s);
}
