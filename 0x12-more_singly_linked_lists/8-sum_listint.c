/* 8. return the sum of all data (n) in linked list */
#include "lists.h"

/**
 * sum_listint - sum n from all nodes in list
 * @head: beginning of list
 *
 * Return: sum of n from all nodes (int)
 */
int sum_listint(listint_t *head)
{
	listint_t *node = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (node->next)
	{
		sum += node->n;
		node = node->next;
	}

	/* get value of last node */
	sum += node->n;

	return (sum);
}
