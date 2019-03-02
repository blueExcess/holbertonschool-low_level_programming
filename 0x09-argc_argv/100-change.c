/* 5. (advanced) print the minimum number of coins needed to make change */
#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print min number of coins to make change
 * @argc: number of args
 * @argv: args
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int count = 0, amount;

	amount = atoi(argv[1]);

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	if (amount < 0)
	{
		puts("0");
		return (2);
	}

	/* quarters */
	count += amount / 25;
	amount %= 25;
	/* dimes */
	count += amount / 10;
	amount %= 10;
	/* nickel */
	count += amount / 5;
	amount %= 5;
	/* pennies */
	count += amount / 1;

	printf("%d\n", count);

	return (0);
}
