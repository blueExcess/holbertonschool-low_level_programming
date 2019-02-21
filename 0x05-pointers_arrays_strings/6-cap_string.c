/* 6. function that capitalizes all words of a string */
#include "holberton.h"

/**
 * cap_string - capitalize all words of a string
 * @s: string to modify
 *
 * Return: string
 */
char *cap_string(char *s)
{
	char sep[] = {
' ', '\t', '\n', ',', ';', '.', '!',
'?', '"', '(', ')', '{', '}', '\0'};
	char *p = s, *seper = sep;

	while (*p)
	{
		while (*seper)
		{
			if (*p == *seper && p[1] >= 'a' && p[1] <= 'z')
			{
				*(p + 1) -= 32;
				break;
			}
			seper++;
		}
		seper = sep;
		p++;
	}
	return (s);
}
