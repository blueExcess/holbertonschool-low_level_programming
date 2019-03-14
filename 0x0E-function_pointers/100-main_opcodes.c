/* 4. (Advanced) write a func that prints the opcodes of its own main func */
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print opcodes of own function
 * @argc: number of args
 * @argv: arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int bytes = 0, x;
	unsigned char *pm;

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
	pm = (unsigned char *)&main;
	for (x = 0; x <= bytes; x++)
	{
		/* cycle through pointer and print */
		if (x < bytes)
		{
			printf("%02hx", pm[x]);
			printf(" ");
		else
			printf("%02hx\n", pm[x]);
	}
	return (0);
}
