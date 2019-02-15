/* 4. print from 0 to 9 except numbers 2 and 4 */

#include "holberton.h"

/**
 * print_most_numbers - print all but 2 and 4
 *
 * Return: none
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
			_putchar(i);
	}
	_putchar('\n');
}
