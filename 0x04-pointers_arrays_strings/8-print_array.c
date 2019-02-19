/* 8. Print n places of an array */

#include <stdio.h>
#include "holberton.h"

/**
 * print_array - print n places of an array
 * @a: pointer to array
 * @n: places of array to print
 *
 * Return: none
 */
void print_array(int *a, int n)
{
	int i;

	if (n == 0)
		printf("\n");
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i < n - 1)
				printf("%d, ", a[i]);
			else
				printf("%d", a[i]);
		}
		printf("\n");
	}
}
