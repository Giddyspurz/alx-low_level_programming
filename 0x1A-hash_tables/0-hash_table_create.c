#include "hash_tables.h"

/**
 * hash_table_create - entry size hash table
 * @size:	size of array
 * Return:	NULL if it fail or new hash
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_h = NULL;

	new_h = malloc(sizeof(hash_table_t));
	if (new_h == NULL)
		return (NULL);

	new_h->size = size;
	new_h->array = malloc(sizeof(hash_table_t *) * size);
	if (new_h->array == NULL)
	{
		free(new_h);
		return (NULL);
	}
	return (new_h);
}
