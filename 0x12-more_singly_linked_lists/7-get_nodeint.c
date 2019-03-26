/* 7. Function to return Nth node of a linked list */
#include "lists.h"

/**
 * get_nodeint_at_index - what a terrible name
 * @head: beginning of list
 * @index: index of list to select
 *
 * Return: address of node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	node = head;
	while (node->next && i < index)
	{
		node = node->next;
		i++;
	}

/* causes segfault if index > no of nodes */
	if (i < index)
		return (NULL);

	return (node);
}
