/* 3. Add new node to end of linked list */
#include "lists.h"

/**
 * lenlen - get length of string
 * @str: string to measure
 *
 * Return: length of string
 */
unsigned int lenlen(const char *str)
{
	unsigned int count;

	while (*str)
	{
		count++;
		str++;
	}

	return (count);
}

/**
 * add_node_end - add new node to end of list
 * @head: pointer to begining of node
 * @str: string to add to node
 *
 * Return: address of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *end = *head;
	char *temp;

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
		temp = strdup(str);
		if (temp == NULL)
		{
			free(new);
			return (NULL);
		}
		new->str = temp;
		new->len = lenlen(str);
	}
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
