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
