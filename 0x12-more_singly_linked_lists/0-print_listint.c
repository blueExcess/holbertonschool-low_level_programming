/* 0. print all elements of a linked list */
#include "lists.h"

/**
 * print_listint - print all elements of list
 * @h: list to print
 *
 * Return: size_t - num of nodes in list
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
