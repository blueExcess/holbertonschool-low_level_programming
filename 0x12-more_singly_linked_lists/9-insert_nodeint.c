/* 9. function to insert new node at given position */
#include "lists.h"

/**
 * insert_nodeint_at_index - insert new node at given index
 * @head: beginning of list
 * @idx: index (position to insert new node)
 * @n: value to give node->n
 *
 * Return: address of new node or NULL on failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *ind;

	if (head == NULL)
		return (NULL);
/* creating new node */
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
/* set ind to beginning position and set node data */
	ind = *head;
	new->n = n;
	if (idx == 0 && *head == NULL)
	{
		new->next = NULL;
		*head = new;
		return (new);
	}
	else if (idx > 0 && *head == NULL)
		return (NULL);
	else if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	else
	{
		for (idx--; idx && ind->next; idx--)
			ind = ind->next;
		if (idx > 0)
			return (NULL);
	}
/* set member values of new */
	new->next = ind->next;
	ind->next = new;

	return (new);
}
