#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: size of hash table to create.
 *
 * Return: pointer to the hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **node;

	table = calloc(1, sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = calloc(size, sizeof(node));
	if (table->array == NULL)
		return (NULL);
	return (table);
}
