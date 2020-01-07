#include "hash_tables.h"
/**
* hash_table_set - A function that adds an element to the hash table
* @ht: pointer to the hash table
* @key: pointer to key
* @value: value in pair
*
* Return: 1 if success, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = NULL;
	unsigned long int i_key;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	i_key = key_index((const unsigned char *)key, ht->size);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[i_key];
	ht->array[i_key] = new;
	return (1);
}
