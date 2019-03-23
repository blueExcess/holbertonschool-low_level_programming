/* 4. Free list */
#include "lists.h"

/**
 * free_list - free a list
 * @head: pointer to list
 *
 * Return: VOID
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
