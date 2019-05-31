#include "hash_tables.h"

/**
 * key_index - hashes the key and returns index for info storage
 * @key: key to be hashed (to death!)
 * @size: size of array/hash table.
 *
 * Return: index for data to be stored at (retreived?)
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int ind = 0;
	ind = hash_djb2(key) % size;

	return (ind);
}
