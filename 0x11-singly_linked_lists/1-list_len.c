/* 1. function to print out length of linked list */
#include "lists.h"

/**
 * list_len - return no. of elements in list
 * @h: list to check
 *
 * Return: size_t, number of elements
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
