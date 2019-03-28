/* 12. (advanced) */
#include <stdio.h>

/**
 * main - print lots of digits (3) but not all digits tee he he
 *
 * Return: 0 on success
 */
int main(void)
{
/* note -- 58 = '9' + 1 */
	int x, y, z;

	for (x = '0'; x < 58; x++)
	{
		for (y = x + 1; y < 58; y++)
		{
			for (z = y + 1; z < 58; z++)
			{
				putchar(x);
				putchar(y);
				putchar(z);
				if (x < '7' || y < '8' || z < '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar(10);
	return (0);
}
