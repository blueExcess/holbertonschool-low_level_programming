/* 5. Print all single-digit numbers of base 10 */

#include <stdio.h>

/**
 * main - print numbers 1 through 10
 *
 * Return: 0 on success
 */
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		printf("%d", x);
		x++;
	}
	printf("\n");
	return (0);
}
