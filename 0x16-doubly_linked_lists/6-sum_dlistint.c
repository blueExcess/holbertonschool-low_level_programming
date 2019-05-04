/* 6. func to return sum of all nodes in DLL */
#include "lists.h"

/**
 * sum_dlistint - return sum of all nodes
 * @head: start of DLL
 *
 * Return: 0 if empty, otherwise sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *seek = head;

	if (!head)
		return (sum);
	for (; seek; seek = seek->next)
		sum += seek->n;
	return (sum);
}
