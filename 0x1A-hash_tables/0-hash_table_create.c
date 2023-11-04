#include "hash_tables.h"

/**
 *hash_table_create - ..
 *@size: ..
 *Return: ..
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table_dessigned;
	unsigned int i;

	if (size == 0)
		return (NULL);
	hash_table_dessigned = malloc(sizeof(hash_table_t *));
	if (!hash_table_dessigned)
		return (NULL);

	hash_table_dessigned->size = size;
	hash_table_dessigned->array = malloc(sizeof(hash_node_t *) * (size + 1));
	if (!hash_table_dessigned->array)
	{
		free(hash_table_dessigned);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		hash_table_dessigned->array[i] = NULL;
	return (hash_table_dessigned);
}
