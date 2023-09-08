#include "hash_tables.h"

/**
 * key_index - function that gives the index of a key
 * @key: D key 2 b indexed
 * @size: D size of d hash table arr.
 *
 * Return: D index where the key shd be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int value;

	value = hash_djb2(key);
	return (value % size);
}
