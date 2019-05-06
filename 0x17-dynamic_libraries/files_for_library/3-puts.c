/* 3. replacement function for puts() */

#include "holberton.h"

/**
 * _puts - prints string to stdout w/ \n
 * @str: string to print
 *
 * Return: none
 */
void _puts(char *str)
{

	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
