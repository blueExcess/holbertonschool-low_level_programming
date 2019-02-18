/* 1. Swap the values of a and b using pointers */

#include "holberton.h"

/**
 * swap_int - swap values of two integers
 * @a: first to swap
 * @b: second value to swap
 *
 * Return: none
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
