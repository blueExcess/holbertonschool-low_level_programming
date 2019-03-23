#include <stdio.h>

/**
 * premain - code to run before main
 *
 * Return: VOID
 */
void __attribute__ ((constructor)) premain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
