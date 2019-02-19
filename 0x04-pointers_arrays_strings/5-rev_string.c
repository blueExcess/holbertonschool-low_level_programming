/* 5. Reverse string (no print) */

#include "holberton.h"

/**
 * rev_string - reverse string
 * @s: string to reverse
 *
 */
void rev_string(char *s)
{
	char *right = s, *left = s;
	int temp;

	while (*right)
		right++;
	right--;
	while (left <= right)
	{
		temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}
