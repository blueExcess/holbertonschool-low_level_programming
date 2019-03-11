/* 2. program to print name of file it was compiled from */
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print name of file
 *
 * Return: 0 on success
 */
int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
