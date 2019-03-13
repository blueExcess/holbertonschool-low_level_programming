/* 2. search for an integer */
#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - search for an integer
 * @array: array to search
 * @size: size of array
 * @cmp: compare (takes an int)
 *
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, value = 0;

	if (cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	if (array == NULL)
		return (-1);

	for (i = 0; i < size && value == 0; i++)
		value = cmp(array[i]);
	if (value == 0)
		return (-1);
	else
		return (i - 1);
}
