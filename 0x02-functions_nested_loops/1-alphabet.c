/* 1. Print out alphabet using _putchar function */

#include "holberton.h"

/**
 * print_alphabet - print alphabet
 *
 * Return: 0
 */
void print_alphabet(void)
{
	int x;
	for (x='a'; x <= 'z'; x++)
		_putchar(x);
	_putchar('\n');
	return (0);
}
