/* 10. function to delete node at index of linked list */
#include "lists.h"

/**
 * delete_nodeint_at_index - remove (free) node at given index
 * @head: beginning of list
 * @index: index of node to be removed
 *
 * Return: 1 on success, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
