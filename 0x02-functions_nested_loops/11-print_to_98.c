/* 11. Print from n to 98; stdlib allowed */

#include <stdio.h>

/**
 * print_to_98 - print from n to 98
 * @n: pass to thing
 *
 * Return: returns stuff
 */
void print_to_98(int n)
{
	int x;

	if (n > 98)
	{
		for (x = n; x > 98; x--)
			printf("%d, ", x);
		printf("98\n");
	}
	else if (n == 98)
		printf("98\n");
	else
	{
		for (x = n; x < 98; x++)
			printf("%d, ", x);
		printf("98\n");
	}
}
