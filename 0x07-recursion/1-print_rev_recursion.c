/* 1. Print a string in reverse using recursion */
#include "holberton.h"

/**
 * _print_rev_recursion - print string in reverse
 * @s: string to reverse
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	char *end = s;
	char c;

	if (*end)
	{
		_print_rev_recursion(end + 1);
		c = *end;
		_putchar(c);
	}
}
