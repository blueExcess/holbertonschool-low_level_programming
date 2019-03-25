/* 3. Add new node to end of list */
#include "lists.h"

/**
 * add_nodeint_end - add new node to end of list
 * @head: begining of list
 * @n: int to add
 *
 * Return: address of new node or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *end = *head;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		while (end->next)
			end = end->next;
		end->next = new;
	}
	return (new);
}
