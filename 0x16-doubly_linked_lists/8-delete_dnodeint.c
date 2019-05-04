/* 8. func to delete node from DLL at index */
#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index
 * @head: start of list
 * @index: node to eliminate
 *
 * Return: 1 on success, -1 on fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *seek = *head, *sp, *sn;

	if (head == NULL || *head == NULL)
		return (-1);
	for (; index && seek->next; seek = seek->next, index--)
		;
	if (index)
		return (-1);
	sp = seek->prev;
	sn = seek->next;
	if (sp && sn)
	{
		sp->next = sn;
		sn->prev = sp;
	}
	else if (!sp && sn)
	{
		sn->prev = NULL;
		*head = sn;
	}
	else if (sp && !sn)
		sp->next = NULL;
	else
		*head = NULL;
	free(seek);
	return (1);
}
