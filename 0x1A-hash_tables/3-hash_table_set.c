#include "hash_tables.h"

/**
 * s_collision - searching collision
 * @ht:		hash table
 * @key:	string key
 * @value:	string value
 * @idx:	index
 * idx:	index
 * Return: O if is is wrong or 1 if ist is success
 */
int s_collision(hash_table_t *ht, char *key, char *value, int idx)
{
	hash_node_t *tmp;

	tmp = ht->array[idx];

	while (tmp)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			if (tmp->value == NULL)
				return (1);

			return (1);
		}
		tmp = tmp->next;
	}
	return (0);
}
/**
 * new_node - insert node
 * @key:	string key
 * @value:	string value
 * Return: new node
 */
hash_node_t *new_node(const char *key, const char *value)
{
	hash_node_t *new;

	new = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (NULL);

	new->key = strdup(key);
	if (new->key == NULL)
		return (NULL);

	new->value = strdup(value);
	if (new->value == NULL)
	{
		free(new->key);
		return (NULL);
	}
	new->next = NULL;

	return (new);
}
/**
 * hash_table_set - insert elements to the hash table
 * @ht:	hash table
 * @key:	string key
 * @value:  string value
 * Return:	0 if fail or 1 if success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *temp;
	int idx, n_node;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);

	if (ht->array[idx] != NULL)
	{
		n_node = s_collision(ht, (char *)key, (char *)value, idx);
		if (n_node == 1)
			return (1);
	}

	new = new_node(key, value);
	if (new == NULL)
		return (0);

	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = new;
		return (1);
	}

	temp = ht->array[idx];
	ht->array[idx] = new;
	new->next = temp;

	return (1);
}
