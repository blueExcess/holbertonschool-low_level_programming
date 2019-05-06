/* 10 (advanced) - mimic function of atoi() */

#include "holberton.h"

/**
 * _atoi - convert string to numbers
 * @s: string to convert
 *
 * Return: int from string
 */
int _atoi(char *s)
{
	int retVal = 0;
	signed char negative = 0;
	char *arr;

	for (arr = s; (*arr < '0' || *arr > '9') && *arr; arr++)
		if (*arr == '-')
			negative = !negative;
	for (; *arr >= '0' && *arr <= '9'; arr++)
	{
		retVal *= 10;
		if (negative == 1)
			retVal -= *arr - '0';
		else
			retVal += *arr - '0';
	}
	return (retVal);
}
