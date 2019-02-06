/* 9. Print out quote w/o using printf or puts */

#include <unistd.h>

/**
 * main - will print as error msg
 *
 * Return: will give 1
 */
int main(void)
{
	write(2,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);
}
