/* 3. main for program */
#include "3-calc.h"

/**
 * main - accept args and then convert to ints
 * @argc: num of args given
 * @argv: args given
 *
 * Return: value of calc
 */
int main(int argc, char *argv[])
{
	char *operator;
	int (*p)(int, int);
	int a = 0, b = 0;

	/* check num of args */
	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}
	/* assignments */
	if (argv[2][0] == '\0' || argv[2][1] != '\0')
	{
		puts("Error");
		exit(99);
	}
	operator = argv[2];
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	p = get_op_func(operator);
	if (p == NULL)
	{
		puts("Error");
		exit(99);
	}

	printf("%i\n", (p(a, b)));
	return (0);
}
