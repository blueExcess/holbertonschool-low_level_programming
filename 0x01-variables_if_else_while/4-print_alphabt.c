/* 3. Print Alphabet, less letters q and e */

#include <stdio.h>

/**
 * main - will print alphabet, less q and e
 *
 * Return: 0 on success
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
	if (c != 'e' && c != 'q')
		putchar(c);
	c++;
	}
	putchar('\n');
	return (0);
}
