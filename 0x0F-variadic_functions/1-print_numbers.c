/* 1. Function to print numbers passed as args */
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print args passed
 * @seperator: seperator between numbers
 * @n: number of args
 *
 * Return: void
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list wowwow;
	unsigned int i;

	va_start(wowwow, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(wowwow, int));
		if (seperator && i != n - 1)
			printf("%s", seperator);
	}
	va_end(wowwow);
	printf("\n");
}
