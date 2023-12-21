#include "hash_tables.h"

/**
 * key_index - key/value index
 *
 * @key: The key to get the index
 * @size: The size of the array
 *
 * Return:key index.
 * Description: djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
