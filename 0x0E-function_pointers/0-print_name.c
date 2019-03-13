/* 0. write a function that prints a name */
#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - print a name using function pointers
 * @name: name to print (pointer)
 * @f: function - takes a pointer to char
 *
 * Return: null
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
