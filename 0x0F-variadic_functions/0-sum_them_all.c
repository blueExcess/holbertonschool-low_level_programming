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
int sum_them_all(unsigned int n, ...)
{
	int i, sum = 0;
	va_list sally;

	if (n == 0)
		return (0);

	va_start(sally, n);
	for (i = n; i; i--)
		sum += va_arg(sally, int);

	va_end(valist);

	return (sum);
}
