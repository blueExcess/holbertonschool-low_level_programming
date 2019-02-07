/* 4. Print Alphabet in lowercase and then uppercase */

#include <stdio.h>

/**
 * main - will print two versions of alphabet
 *
 * Return: 0 for success
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	c = 'A';
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
