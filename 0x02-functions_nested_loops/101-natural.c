/* 13 (advanced) - list all natural numbers below 1024 that are mult of 3/5 */
#include <stdio.h>

/**
 * main - print all nat nums below 1024 mult of 3/5
 *
 * Return: sum of numbers
 */
int main(void)
{
	int i = 0, sum = 0;

	for (; i < 1024; i++)
	{
		if (i % 3)
			sum += i;
		else if (i % 5)
			sum += i;
	}
	printf("%d\n", sum / 2);
	return (0);
}
