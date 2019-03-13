/* 1. execute a function given as param on each element of array */
#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - iterate through array and apply function
 * @array: array to iterate over
 * @size: size of array
 * @action: function to use (takes int param)
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
		return;
	if (action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
