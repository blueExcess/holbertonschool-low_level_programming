/*
 * 9. Print comb - print 0, 1, ... to 9
 */

#include <stdio.h>

/**
 * main - print stuff
 *
 * Return: 0 on success
 */
int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		if (x == '9')
			putchar(x);
		else
		{
			putchar(x);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
