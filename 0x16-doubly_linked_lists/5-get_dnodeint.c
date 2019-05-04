/* 5. return nth node of DLL */
#include "lists.h"

/**
 * get_dnodeint_at_index - return nth node of DLL
 * @head: start of DLL
 * @index: position to return (index)
 *
 * Return: requested node or NULL on failure
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *seek = head;

	if (head == NULL)
		return (NULL);
	for (; i < index && seek->next; seek = seek->next, i++)
		;
	if (i != index)
		return (NULL);
	return (seek);
}
