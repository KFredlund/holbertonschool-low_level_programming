#include "hash_tables.h"
/**
* key_index - A function that gives you the index of a key
* @key: the key
* @size: size of the array
*
* Return: Index at which key/value is stored
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;

	idx = hash_djb2(key) / size;
	return (idx);
}
