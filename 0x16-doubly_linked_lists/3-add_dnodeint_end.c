/* 3. Add node to end of DLL */
#include "lists.h"

/**
 * add_dnodeint_end - add node to end of DLL
 * @head: start of DLL
 * @n: int to add to new node
 *
 * Return: address of new node or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *seek = *head;

	if (head == NULL)
		return (NULL);

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	temp->prev = NULL;
	if (*head == NULL)
		*head = temp;
	else
	{
		for (; seek->next; seek = seek->next)
			;
		temp->prev = seek;
		seek->next = temp;
	}
	return (temp);
}
