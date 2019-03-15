/* 0. return the sum of all parameters */
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum all parameters
 * @n: number of args
 *
 * Return: sum of thingies
 */
int sum_them_all(const unsigned int n, ...)
{
	int i, sum;
	va_list valist;

	if (n == 0)
		return (0);

	va_start(valist, n);
	for (i = 0; i < num; i++)
		sum += va_arg(valist, int);

	va_end(valist);

	return (sum);
}
