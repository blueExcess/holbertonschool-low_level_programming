/* 0. function to print value of all nodes of dll */
#include "lists.h"

/**
 * print_dlistint - print value of all nodes
 * @h: pointer to start of list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);

	for (; h; h = h->next, i++)
		printf("%d\n", h->n);

	return (i);
}
