/* 5. function to mimic 'strstr()' */
#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - find first instance of string matching
 * @haystack: string to search
 * @needle: string to match
 *
 * Return: string from point of match
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack, *n = needle;

	while (*haystack)
	{
		while (*h == *n && *n)
		{
			h++;
			n++;
		}
		h = haystack;
		if (*n == 0)
			return (haystack);
		n = needle;
		h++;
		haystack++;
	}
	return (0);
}
