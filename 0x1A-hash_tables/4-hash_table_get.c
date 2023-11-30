#include "hash_tables.h"

/**
  * hash_table_get - function that retrieves a
  * value associated with a ke
  * @ht: the hash table you want to look into
  * @key: the key
  * Return: the value associated with the element
  */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index;
hash_node_t *node;

if (!ht || !key)
	return (NULL);
index = key_index((unsigned char *)key, ht->size);
node = ht->array[index];
while (node)
{
if (!strcmp(key, node->key))
	return (node->value);
node = node->next;
}
return (NULL);
}
