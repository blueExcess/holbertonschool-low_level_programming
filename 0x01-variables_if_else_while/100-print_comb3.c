/* 11. (advanced) */
#include <stdio.h>

/**
 * main - print lots of digits but not all digits tee he he
 *
 * Return: 0 on success
 */
int main(void)
{
	int x = 0, y = 0;

	for (x = 48; x <= 57; x++)
		for (y = x + 1; y <= 57; y++)
		{
			putchar(x);
			putchar(y);
			if (x < 56 || y < 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	putchar(10);
	return (0);
}
