#include "hash_tables.h"
/**
 * key_index - .....
 * @key: .......
 * @size: ........
 * Return: index of a key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_key;

	hash_key = hash_djb2(key);

	return (hash_key % size);
}
