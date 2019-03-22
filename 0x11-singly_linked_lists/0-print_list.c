/* 0. write a function to print out all elements of a linked list */
#include "lists.h"

/**
 * print_list - print out the linked list
 * h - list to print out
 *
 * Return: size of something
 */
size_t print_list(const list_t *h)
{
	unsigned int num = 0;

	while (h)
	{
		if (h->str == '\0')
			printf("[0] %p\n", h->str);
		else
			printf("[%d] %s\n", h->len, h->str);
		num++;
		h = h->next;
	}
	return (num);
}
