/* 4. set value of bit to 0 at given index */
#include "holberton.h"

/**
 * clear_bit - set bit at index to 0
 * @n: pointer to number
 * @index: index
 *
 * Return: 1 on success, -1 on fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (n == NULL)
		return (-1);
	if (index > 63)
		return (-1);
	mask <<= index;
	if (*n & mask)
		*n ^= mask;
	return (1);
}
