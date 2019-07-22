/* 0x17, #3 (100 - advanced) create math functions for dynamic lib used in py */

/**
 * add - add two numbers
 * @a: first num
 * @b: second num
 *
 * Return: value
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subtract two numbers
 * @a: first number
 * @b: second number
 *
 * Return: difference
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiply two numbers
 * @a: first number
 * @b: second number
 *
 * Return: product
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - divide two numbers
 * @a: first number
 * @b: second number
 *
 * Return: quotient
 */
int div(int a, int b)
{
	return (a / b);
}

/**
 * mod - modulo two numbers
 * @a: first number
 * @b: second number
 *
 * Return: modulouseous
 */
int mod(int a, int b)
{
	return (a % b);
}
