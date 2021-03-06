/* 2. function to add new node to beginning of list */
#include "lists.h"

/**
 * add_nodeint - add new node to beginning of list
 * @head: beginning of list
 * @n: int to add
 *
 * Return: address of new element or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
