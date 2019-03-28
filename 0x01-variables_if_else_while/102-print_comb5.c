/* 13. (advanced) */
#include <stdio.h>

/**
 * main - print lots of four digit numbers, but not all digits tee he he
 *
 * Return: 0 on success
 */
int main(void)
{
	int first, second;

	for (first = 0; first < 99; first++)
	{
		for (second = first + 1; second < 100; second++)
		{
			putchar(first / 10 + '0');
			putchar(first % 10 + '0');
			putchar(' ');
			putchar(second / 10 + '0');
			putchar(second % 10 + '0');
			if (first < 98 || second < 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar(10);
	return (0);
}
