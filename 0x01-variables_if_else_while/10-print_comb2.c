/*
 * 10. Print Comb2 - print numbers 00 to 99,
 *    seperated by commas.
 */

#include <stdio.h>

/**
 * main - print numbers from 00 to 99
 *
 * Return: 0 on success
 */
int main(void)
{
	int x, y;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			putchar(x);
			putchar(y);
			putchar(',');
			putchar(' ');
		}
		y = 0;
	}
	putchar('\n');
	return (0);
}
