/* 4. program that adds two numbers given via command line */
#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - add two numbers
 * @argc: number of args passed
 * @argv: arguments
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int sum = 0, i = 1, count;

	count = argc;
	if (argc == 1)
	{
		puts("0");
		return (1);
	}
/* need error case (print "Error" ret 1) for args not numbers */
	while (count-- > 1)
	{
		if (*argv[count] > '9' || *argv[count] < '0')
		{
			puts("Error");
			return (1);
		}
	}

	count = argc - 1;
	while (count--)
	{
		sum += atoi(argv[i]);
		i++;
	}

	printf("%d\n", sum);
	return (0);
}
