#include <stdio.h>
#include <stdlib.h>

/**
 * main - keygen for crackme5
 * @ac: number of args
 * @av: args
 *
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	if (ac != 2)
		return (-1);
	printf("%s\n", av[1]);

	return (0);
}
