/* 4. make a function that reverses an array of ints */

#include "holberton.h"

/**
 * reverse_array - reverse values in array
 * @a: array to reverse
 * @n: size of given array
 *
 * Return: none
 */
void reverse_array(int *a, int n)
{
	int *right = a, *left = a;
	int temp, i = 0;

	n--;
	while (i < n)
	{
		temp = left[n];
		left[n] = right[i];
		right[i] = temp;
		n--;
		i++;
	}
}
