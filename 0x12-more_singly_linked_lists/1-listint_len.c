/* 1. function to return the number of elements in a linked list */
#include "lists.h"

/**
 * listint_len - length of list
 * @h: list to check
 *
 * Return: num of nodes in list
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
