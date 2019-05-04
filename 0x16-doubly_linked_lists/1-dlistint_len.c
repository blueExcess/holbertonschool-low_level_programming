/* 1. funct to return no of elements in DLL */
#include "lists.h"

/**
 * dlistint_len - return no of ele in DLL
 * @h: linked list (head)
 *
 * Return: no of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t ele = 0;

	if (h == NULL)
		return (0);

	for (; h; h = h->next, ele++)
		;
	return (ele);
/* may need to add function to move to beg of list */

}
