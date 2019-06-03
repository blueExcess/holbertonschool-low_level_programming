/* 5. function to print hash map. */
#include "hash_tables.h"

/**
 * hash_table_print - print out entire hash map.
 * @ht: hash table
 *
 * Return: print out list - if ht == null, print nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	int i = 0, j = 0;
	hash_node_t *s;

	if (ht == NULL)
		return;
	for (j = ht->size - 1; ht->array[j] == NULL; j--)
		;
	s = ht->array[0];
	putchar('{');
	for (; i <= j; i++, s = ht->array[i])
	{
		for (; s; s = s->next)
		{
			if (s && i != j)
				printf("'%s': '%s, '", s->key, s->value);
			else if (s && i == j)
				printf("'%s': '%s'", s->key, s->value);
		}
	}
	puts("}");

}
