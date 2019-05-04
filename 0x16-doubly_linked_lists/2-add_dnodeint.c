/* 2. Funct to add new node to beginning of DLL */
#include "lists.h"

/**
 * add_dnodeint - add new node to start of DLL
 * @head: beginning of list
 * @n: int to put in new node
 *
 * Return: address of new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	if (head == NULL)
		return (NULL);
	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->prev = NULL;
	if (*head)
	{
		temp->next = *head;
		(*head)->prev = temp;
	}
	else
		temp->next = NULL;
	*head = temp;
	return (temp);
}
