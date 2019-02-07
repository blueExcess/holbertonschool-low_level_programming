/* 2. Alphabet Game */

#include <stdio.h>

/**
 * main - will print alphabet using putchar()
 *
 * Return: 0 on success
 */
int main(void)
{
char c = 'a';
while (c <= 'z')
{
	putchar(c);
	c++;
}
putchar('\n');
return (0);
}
