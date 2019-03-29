/* 5. return number of bits required to go from x to y */
#include "holberton.h"

/**
 * flip_bits - how many bits to flip
 * @n: number 1
 * @m: number 2
 *
 * Return: num of bits required to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int tN = 0, tM = 0, notSame = 0, isSame = 0;

	for (i = 63; i >= 0; i--)
	{
		tN = n >> i;
		tM = m >> i;
		if ((tN & 1) == (tM & 1))
			isSame++;
		else
			notSame++;
	}
	return (notSame);
}
