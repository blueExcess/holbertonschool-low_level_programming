/* 7. Determine if a given string is a palindrome */
#include "holberton.h"

/**
 * _strlen_recursion - find length of string
 * @s: string to measure
 *
 * Return: int
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}


/**
 * pal_check - check if string is palindrome
 * @str: string to check
 * @beg: beginning of string (int)
 * @end: end of string (int)
 *
 * Return: 1 if pal, else 0
 */
int pal_check(char *str, int beg, int end)
{
	if (beg >= end)
		return (1);
	if (str[beg] != str[end])
		return (0);
	return (pal_check(str, beg + 1, end - 1));
}

/**
 * is_palindrome - get length and pass to pal_check
 * @s: string to check
 *
 * Return: 1 for yes, 0 for no
 */
int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	if (length == 0)
		return (1);
	return (pal_check(s, 0, length - 1));
}
