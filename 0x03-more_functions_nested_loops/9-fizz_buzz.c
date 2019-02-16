/* 9. FizzBuzz test in C */

#include <stdio.h>

/**
 * main - fizz buzz test
 *
 * Return: 0 on success
 */
int main(void)
{
	int x;

	for (x = 1; x < 101; x++)
	{
		if (x % 15 == 0)
			printf("FizzBuzz ");
		else if (x % 3 == 0)
			printf("Fizz ");
		else if (x % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", x);
	}
	printf("\n");
	return (0);
}
