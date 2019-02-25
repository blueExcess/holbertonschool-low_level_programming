/* 3. function that gets the length of a prefix substring */
#include "holberton.h"

/**
 * _strspn - return number of bytes with segment matching accept
 * @s: string to evaluate
 * @accept: letters to accept
 *
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	char *a = accept;
	unsigned int x = 0;

	while (*s)
	{
		while (*a)
		{
			if (*s == *a)
				x++;
			else
				return (x);
			a++;
		}
		a = accept;
		s++;
	}
	return (0);
}
