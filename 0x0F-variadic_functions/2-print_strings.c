/* 2. Function to print strings passed as args */
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print args passed
 * @seperator: seperator between strings
 * @n: number of args
 *
 * Return: void
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list bob;
	unsigned int i;
	char *s;

	va_start(bob, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(bob, char *);
		if (s)
			printf("%s", s);
		else
			printf("(nil)");
		if (seperator && i != n - 1)
			printf("%s", seperator);
	}
	va_end(bob);
	printf("\n");
}
