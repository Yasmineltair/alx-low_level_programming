#include "hash_tables.h"

/**
  * hash_table_set -  function that adds an element to the hash table.
  * @ht: the hash table you want to add or update the key/value to
  * @key: the key
  * @value: the value associated with the key
  * Return: 1 if it succeeded, 0 otherwise
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
  * updt_node - update node
  * @node: pointer to the existed node
  * @key: key
  * @value: value of the updated or new node
  * Return: pointer to the head
  */

hash_node_t *updt_node(hash_node_t *node, const char *key, char *value)
{
	hash_node_t *temp = node;

	while (temp)
	{
		if (!strcmp(key, temp->key))
		{
			free(temp->value);
			temp->value = value;
			return (node);
		}
		temp = temp->next;
	}
	temp = node;
	node = new_nod(node);
	if (!node)
	{
		node = temp;
		return (node);
	}
	node->key = strdup(key);
	node->value = value;
	return (node);
}

/**
  * new_nod - make a new node
  * @e_node: exist node
  * Return: pointer to the new node
  */

hash_node_t *new_nod(hash_node_t *e_node)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (NULL);
	node->key = NULL;
	node->value = NULL;
	node->next = e_node;
	return (node);
}
