/* 4. (Advanced) write a func that prints the opcodes of its own main func */
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print opcodes of own function
 * @argc - number of args
 * @argv - arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int bytes = 0, x;
	unsigned char *pm = (unsigned char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (x = 0; x <= bytes; x++)
	{
		/* cycle through pointer and print - how to format? */
	}
	return (0);
}
