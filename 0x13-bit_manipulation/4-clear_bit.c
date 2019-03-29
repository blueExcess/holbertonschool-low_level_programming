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
	if (index > 63)
		return (-1);
	*n = (*n ^ (1 << index));
	return (1);
}
