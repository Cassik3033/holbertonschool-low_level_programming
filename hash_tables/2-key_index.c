#include "hash_tables.h"
/**
 * key_index - get the index at which a key/value pair should be stroed in array of a hash table
 * @key: the key to get the index of
 * @size: the size of teh array of teh hash table
 * return: the index of the key
 * desc: uses the djb2 algorithm
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
