/* 1. Print number out in binary */
#include "holberton.h"

/**
 * print_binary - print num out in binary
 * @n: number to print
 *
 * Return: VOID
 */
void print_binary(unsigned long int n)
{
	unsigned long int copy = n, mask = 1, count = 0, result = 0;

	if (copy == 0)
	{
		putchar('0');
		return;
	}
	for (; copy; copy >>= 1, mask <<= 1, count++)
		;
	for (; mask; mask >>= 1, count--)
	{
		result = (n & mask) >> count;
		putchar(result + '0');
	}
}
