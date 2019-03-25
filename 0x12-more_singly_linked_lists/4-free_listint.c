/* 4. free all nodes in linked list */
#include "lists.h"

/**
 * free_listint - free all nodes in list
 * @head: beginning of list
 *
 * Return: VOID
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = temp->next;
		free(temp);
	}
}
