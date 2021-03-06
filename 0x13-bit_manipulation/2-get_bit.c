/* 2. print value of given bit */
#include "holberton.h"

/**
 * get_bit - get value of bit at index
 * @n: number given
 * @index: index to find
 *
 * Return: value of bit or -1 on fail
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > 63)
		return (-1);
	mask <<= index;
	if (n & mask)
		return (1);
	else
		return (0);
}
