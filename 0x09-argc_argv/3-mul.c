/* 3. function that multiplies two numbers */
#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers
 * @argc: number of args
 * @argv: args
 *
 * Return: 0 on success, 1 if passed more than 2 args
 */
int main(int argc, char **argv)
{
	int x, y, value;

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);

	value = x * y;
	printf("%d\n", value);

	return (0);
}
