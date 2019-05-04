/* 7. insert new node into DLL at position idx */
#include "lists.h"

/**
 * insert_dnodeint_at_index - insert new node at position idx
 * @h: begining of DLL
 * @idx: index of where to insert new node
 * @n: value to give new node
 *
 * Return: address of new node or NULL on fail
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *seek = *h, *sp;

	if (!h)
		return (NULL);
	temp = malloc(sizeof(dlistint_t));
	if (!temp)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	temp->prev = NULL;
	if (*h == NULL)
	{
		*h = temp;
		return (temp);
	}
	if (idx == 0)
	{
		temp->next = seek;
		seek->prev = temp;
		*h = temp;
		return (temp);
	}
	for (; idx && seek->next; seek = seek->next, idx--)
		;
	if (idx)
		return (NULL);
	if (seek == NULL)
	{
		seek->next = temp;
		temp->prev = seek;
		return (temp);
	}
	sp = seek->prev;
	sp->next = temp;
	seek->prev = temp;
	temp->next = seek;
	temp->prev = sp;
	return (temp);
}
