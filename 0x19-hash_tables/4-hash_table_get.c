/* 4. print out hash table. */
#include "hash_tables.h"

/**
 * hash_table_get - print value associated with given key.
 * @ht: hash table
 * @key: key to check for
 *
 * Return: value of key or NULL if not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int ind = 0;
	hash_node_t *s;

	if (key == NULL || key == '\0')
		return (NULL);
	ind = key_index((unsigned char *)key, ht->size);
	s = ht->array[ind];
	if (s)
	{
		if (strcmp(key, s->key) == 0)
			return (s->value);
		for (; s; s = s->next)
			if (strcmp(key, s->key))
				return (s->value);
	}
	return (NULL);
}
