#include "hash_tables.h"
/**
 * hash_table_set - ass or update an element in a hash table
 * @ht: a pointer to the hash table
 * @key: the key to add - connot be an empty string
 * @value: the value associated with key
 * return: upon failure - 0
 * otherwise - 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *value_copy;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (val;ue_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key == 0)
			{
				free(ht->array[i]->value);
				ht->array[i]->value = value_copy;
				return (1);
			}
				}
				new = malloc(sizeof(hash_node_t));
				if (new == NULL)
