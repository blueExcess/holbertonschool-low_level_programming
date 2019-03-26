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
/* set new and ind to beginning position */
	new = *head;
	ind = *head;
/* creating new node */
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
/* cycle to correct position */
	for (idx--; idx; idx--)
		ind = ind->next;
	printf("idx = %i\n", idx);
	if (idx > 0)
		return (NULL);
/* set member values of new */
	new->n = n;
	new->next = ind->next;
	ind->next = new;

	return (new);
}
