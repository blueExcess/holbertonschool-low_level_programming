/* 3. set value of bit to 1 at given index */
#include "holberton.h"

/**
 * set_bit - set bit at index to 1
 * @n: pointer to number
 * @index: index
 *
 * Return: 1 on success, -1 on fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/* unsigned long int *x = n; *//* , mask = 1; */

	if (index > 63)
		return (-1);
	*n = (*n | (1 << index));
	return (1);
}
