/* 7. change to leet speek */
#include "holberton.h"

/**
 * leet - change english to leet speek
 * @str: string to change
 *
 * Return: string after changed
 */
char *leet(char *str)
{
/* a = 4, e = 3, o = 0, t = 7, L = 1 */
	char lowercase[] = "aeotl";
	char uppercase[] = "AEOTL";
	char replacement[] = "43071";
	char *s = str, *low = lowercase, *up = uppercase;
	int position = 0;

	while (*s)
	{
		for (position = 0; *low; low++, up++, position++)
		{
			if (*s == *low || *s == *up)
			{
				*s = replacement[position];
			}
		}
		low = lowercase;
		up = uppercase;
		s++;
	}
	return (str);
}
