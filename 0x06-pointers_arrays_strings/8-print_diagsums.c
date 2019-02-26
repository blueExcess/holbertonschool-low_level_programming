/* 7. print the sums of two diagonals */
#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - sum and print diagonals
 * @a: matrix to sum
 * @size: size of matrix (squares)
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;
	int x;

	for (x = 0; x < (size * size); x += (size + 1))
		sum1 += a[x];
	for (x = size - 1; x < (size * size) - (size - 1); x += (size - 1))
		sum2 += a[x];
	printf("%d, %d\n", sum1, sum2);
}
