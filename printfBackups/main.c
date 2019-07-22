#include "holberton.h"
#include <stdio.h>
#include <limits.h>

/**
 * main - test printf
 *
 * Return: int
 */
int main(void)
{
	char x[] = "Holberton";
	char esc[] = "Holberton\n things\v and \tstuff.";

	_printf("int: %d\n", 123);
	_printf("hex: %#x\n", 123455);
	_printf("lower hex: %x\n", 123455);
	_printf("reverse: %r\n", x);
	_printf("binary: %b\n", 183);
	_printf("upper hex: %X\n", 192834);
	_printf("upper hex: %#X\n", 192834);
	_printf("null address: %p\n", (void *)0);
	_printf("null address: %p\n", (void *)1000);
	_printf("%S\n", "\x8F\xBE\xEF");
	_printf("print escaped: %S\n", "Holberton\n Things");
	_printf("print escaped: %S\n", esc);
	_printf("print escaped: %S\n", "Holberton\n \x81 And Stuff \x4A");
	_printf("print escaped: %S\n", "Something \v And\r \xFF end");

	return (0);
}
