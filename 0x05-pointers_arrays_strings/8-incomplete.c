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
	char letters[] =
"ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMabcdefghijklmnopqrstuvwxyzabcdefghijklm"
		;
	char *s = str, *let = letters, *o = letters;
	int position = 0;

	while (*s)
	{
		for (position = 13; *let; let++, position++)
		{
			if (*s == *let)
				*s = o[position];
		}
		let = letters;
		s++;
	}
	return (str);
}
