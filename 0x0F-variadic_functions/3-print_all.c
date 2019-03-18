/* 3. Write a function that prints any args */
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function to print all args
 * @format: format to use
 *
 * Return: VOID
 */
void print_all(const char * const format, ...)
{
	char const *sue, *next;
	int x = 0;
	va_list john;

	va_start(john, format);
	next = format;
	while (format && *next)
	{
		x = 0;
		switch (*next)
		{
		case 'c':
			printf("%c", va_arg(john, int));
			break;
		case 'i':
			printf("%d", va_arg(john, int));
			break;
		case 'f':
			printf("%f", va_arg(john, double));
			break;
		case 's':
			sue = va_arg(john, char *);
			if (sue)
			{
				printf("%s", sue);
				break;
			}
			printf("(nil)");
			break;
		default:
			x++;
			break;
		}
		if (next[1] && x == 0)
			printf(", ");
		next++;
	}
	printf("\n");
	va_end(john);
}
