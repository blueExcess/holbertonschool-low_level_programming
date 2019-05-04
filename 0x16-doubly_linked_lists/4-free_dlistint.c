/* 4. func to free DLL */
#include "lists.h"

/**
 * free_dlistint - free DLL
 * @head: beginning of list
 *
 * Return: VOID
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *destroy = head;

	if (head == NULL)
		return;
	while (head->next)
	{
		destroy = head->next;
		free(head);
		head = destroy;
	}
	free(destroy);
}
