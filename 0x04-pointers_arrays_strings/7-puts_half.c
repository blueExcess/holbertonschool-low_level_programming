/* 7. write a function that prints half a string */

#include "holberton.h"

/**
 * puts_half - print half the given string
 * @str: given string
 *
 * Return: none
 */
void puts_half(char *str)
{
	int length = 0;

	while (*str)
	{
		str++;
		length++;
	}

	for (str -= length / 2; *str; str++)
		_putchar(*str);
	_putchar(10);
}
