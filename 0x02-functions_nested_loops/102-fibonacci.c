/* 14 (advanced) - print first 50 fibonacci numbers */

#include <stdio.h>

/**
 * main - print first 50 fibonacci numbers
 *
 * Return: 0 on success
 */
int main(void)
{
	int i;
	unsigned long int fib[51];

	fib[0] = 0;
	fib[1] = 1;

	for (i = 2; i < 51; i++)
		fib[i] = fib[i - 2] + fib[i - 1];
	for (i = 1; i < 51; i++)
		printf("%lu\n", fib[i]);
	printf("\n");
	return (0);
}
