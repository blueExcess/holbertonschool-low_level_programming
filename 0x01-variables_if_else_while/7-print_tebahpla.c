/*
 * 7. Smile in the mirror -
 *   print alphabet in reverse
 */

#include <stdio.h>

/**
 * main - print alphabet backwards
 *
 * Return: 0 on success
 */
int main(void)
{
	int x = 'z';

	for (; x >= 'a'; x--)
		putchar(x);
	putchar('\n');
	return (0);
}
