#include "hash_tables.h"

/**
  * hash_table_set -  function that adds an element to the hash table.
  * @ht: the hash table you want to add or update the key/value to
  * @key: the key
  * @value: the value associated with the key
  * Retuen: 1 if it succeeded, 0 otherwise
  */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
char *str;
hash_node_t *node;

if (!ht || !key)
	return (0);
index = key_index((unsigned char *)key, ht->size);
if (value)
	str = strdup(value);
else
	str = NULL;
node = ht->array[index];
if (!node)
	node = new_node(NULL);
if (node->key)
{
	ht->array[index] = updt_node(node, key, str);
	return (1);
}
node->key = strdup(key);
node->value = str;
node->next = NULL;
ht->array[index] = node;
return (1);
}

/**
  * updt_node - 
  *
  *
  *
  */
}
