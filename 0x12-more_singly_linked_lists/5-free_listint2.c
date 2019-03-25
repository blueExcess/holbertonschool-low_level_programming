/* 5. free all nodes in list (given **head) */
#include "lists.h"

/**
 * free_listint2 - free all nodes in list
 * @head: pointer to start of list
 *
 * Return: VOID
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
}
