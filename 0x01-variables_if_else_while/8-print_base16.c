/*
 * 8. Print Base 16 -
 *   print from 0-9 and a-f
 */

#include <stdio.h>

/**
 * main - print stuff to terminal
 *
 * Return: 0 on success
 */
int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
		putchar(x);
	for (x = 'a'; x < 'g'; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
