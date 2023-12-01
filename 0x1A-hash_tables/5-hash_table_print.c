#include "hash_tables.h"

/**
  * hash_table_print -  prints a hash table.
  * @ht: hash table
  */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index, i;
	hash_node_t *node;

	index = i = 0;
	if (!ht)
		return;
	printf("{");
	while (index < ht->size)
	{
		node = ht->array[index];
		while (node)
		{
			printf("\'%s\': \'%s\'", node->key, node->value);
			if (node->next)
				printf(", ");
			node = node->next;
		}
		while (!(ht->array[index + 1]))
			index++;
		if (i && index < ht->size)
			printf(", ");
		else
			i = 1;
		index++;
	}
	printf("}\n");
}
