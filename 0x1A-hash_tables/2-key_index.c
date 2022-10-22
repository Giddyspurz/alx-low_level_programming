#include "hash_tables.h"
/**
 * key_index - entry key
 * @key: store a string taht became the key
 * @size: this is the range
 * Return: key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;

	idx = hash_djb2(key);

	return (idx % size);
}
