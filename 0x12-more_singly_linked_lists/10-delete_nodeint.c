/* 10. function to delete node at index of linked list */
#include "lists.h"

/**
 * delete_nodeint_at_index - remove (free) node at given index
 * @head: beginning of list
 * @index: index of node to be removed
 *
 * Return: 1 on success, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ind, *tgt;

	if (head == NULL)
		return (-1);
	if (*head == NULL)
		return (-1);
	ind = *head;
	tgt = *head;
	if (index > 0)
	{
		for (index; index && ind->next; index++)
		{
			tgt = tgt->next;
			if (index == 1)
				continue;
			ind = tgt->next;
		}
		if (index > 0)
			return (-1);
		ind->next = tgt->next;
		free(tgt);
		return (1);
	}
	else
	{
		return (1);
	}
	return (-1);
}
