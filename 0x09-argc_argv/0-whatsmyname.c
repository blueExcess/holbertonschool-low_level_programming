/* 0. write a program that prints its name */
#include "holberton.h"
#include <stdio.h>


/**
 * main - print name of program
 * @argc: number of args
 * @argv: arguments
 *
 * Return: 0 on success
 */
int main(int __attribute__((unused))argc, char **argv)
{
	printf("%s\n", argv[0]);

	return (0);
}
