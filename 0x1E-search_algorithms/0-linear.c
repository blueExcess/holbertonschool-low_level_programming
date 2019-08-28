/* 0. Linear search - search an array using linear search algorithm */

#include "search_algos.h"

/**
 * linear_search - search using linear algorithm.
 * @array: array to search.
 * @size: size of array.
 * @value: value to search for.
 *
 * Return: -1 if not available or null.
 */
int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (array == NULL || size == 0)
		return (-1);

	for (; (size_t)i <= size - 1; i++)
	{
		printf("Value checked array[%i] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
