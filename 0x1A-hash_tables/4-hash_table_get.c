#include "hash_tables.h"

/**
 *  hash_table_get - describe what the function does
 *  @ht: hash table you want to look into
 *  @key:  key you are looking for
 *
 *  Return: value associated with the element, or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{

hash_node_t *current_node;

if (ht == NULL)
	return (NULL);

index = key_index((const unsigned char *) key, ht->size);

unsigned long int index;

current_node = ht->array[index];

while (current_node != NULL)
{
	if (strcmp(current_node->key, key) == 0)
		return (current_node->value);

	current_node = current_node->next;
}
return (NULL);
}
