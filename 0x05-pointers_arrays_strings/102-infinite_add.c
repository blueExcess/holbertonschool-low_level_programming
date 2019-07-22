/* 11 (advanced) - infinite add */

#include <stdio.h>
/**
 * infinite_add - add two strings full of numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer to store result
 * @size_r: size of result buffer
 *
 * Return: pointer to result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i1, i2, ir, carry = 0;

	for (i1 = 0; n1[i1]; i1++)
		;
	for (i2 = 0; n2[i2]; i2++)
		;
	ir = i1 > i2 ? i1 : i2;
	if (ir > size_r + 1)
		return (NULL);
/* unfinished */
	for (i1--, i2--, ir--; i1 > 0)
