/* 8. function to encode string using rot13 */
#include "holberton.h"

/**
 * rot13 - encode string using rot13
 * @str: string to encode
 *
 * Return: encoded string
 */
char *rot13(char *str)
{
	char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *s = str, *let = letters, *r = rot;
	int position = 0;

	while (*s)
	{
		for (position = 0; *let; let++, r++, position++)
		{
			if (*s == *let)
				*s = *r;
		}
		let = letters;
		r = rot;
		s++;
	}
	return (str);
}
