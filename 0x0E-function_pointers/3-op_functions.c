/* contains the 5 functions to do the maths */
#include "3-calc.h"

/**
 * op_add - add two numbers
 * @a: number
 * @b: other number
 *
 * Return: answer
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two numbers
 * @a: number
 * @b: other number
 *
 * Return: answer
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two numbers
 * @a: number
 * @b: other number
 *
 * Return: answer
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two numbers
 * @a: number
 * @b: other number
 *
 * Return: answer
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		puts("Error");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulo two numbers
 * @a: number
 * @b: other number
 *
 * Return: answer
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		puts("Error");
		exit(100);
	}
	return (a % b);
}
