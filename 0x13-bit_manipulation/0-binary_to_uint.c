/* 0. Convert binary to unsigned int */
#include "holberton.h"

/**
 * binary_to_uint - binary to unsigned int
 * @b: string of binary
 *
 * Return: base 10 number or 0 if failed
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 1, sum = 0;
	int i;

	if (b == NULL)
		return (0);
	if (b[0] == '0' && b[1] == '\0')
		return (0);

	/* bin[0] = '0'; */
	for (i = 0; b[i]; i++)
	{
		if (*b != '0' && *b != '1')
			return (0);
	}

	for (i--; i >= 0; i--, x *= 2)
		if (b[i] == '1' && b[i + 1] == '\0')
			sum++;
		else if (b[i] == '1')
			sum += x;
	return (sum);
}
