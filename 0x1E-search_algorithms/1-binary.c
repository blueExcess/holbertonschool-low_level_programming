/* 1. Binary Search - search array using binary search algorithm */

#include "search_algos.h"

/**
 * binary_search - search array using binary algorithm.
 * @array: array to be searched.
 * @size: size of array.
 * @value: value to search for in array.
 *
 * Return: -1 if value is not found, otherwise return value.
 */
int binary_search(int *array, size_t size, int value)
{
	int low = 0, high, mid, i;

	if (array == NULL || size == 0)
		return (-1);
	high = size - 1;
	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i < high)
				printf("%i, ", array[i]);
			if (i == high)
				printf("%i\n", array[i]);
		}
		mid = (low + high) / 2;
		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
