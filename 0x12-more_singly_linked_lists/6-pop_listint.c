/* 6. delete head node and return that data. */
#include "lists.h"

/**
 * pop_listint - print data and delete first node
 * @head: linked list
 *
 * Return: int (value of n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int x;

	/* bad pointer test */
	if (head == NULL)
		return (0);
	/* empty list test */
	if (*head == NULL)
		return (0);
	temp = *head;
	*head = temp->next;
	x = temp->n;
	free(temp);
	return (x);
}
