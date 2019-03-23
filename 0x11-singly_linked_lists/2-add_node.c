/* 2. Add node to beginning of linked list */
#include "lists.h"

/**
 * lenlen - get length of string
 * @str: string to measure
 *
 * Return: length of string
 */
int lenlen(const char *str)
{
	int count;

	while (str)
	{
		count++;
		str++;
	}

	return (count);
}

/**
 * add_node - add node to begining of linked list
 * @head: begining of list
 * @str: string to add and measure
 *
 * Return: address of new node or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	if (str == NULL)
	{
		new->str = NULL;
		new->len = 0;
	}
	else
	{
		new->str = strdup(str);
		new->len = lenlen(str);
	}
	new->next = *head;
	*head = new;
	return (new);
}
