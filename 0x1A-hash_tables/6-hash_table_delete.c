#include "hash_tables.h"

/**
* hash_table_delete - Deletes a hash table and all its elements.
* @ht: A pointer to the hash table to be deleted.
*
* Return: Nothing
*/
void hash_table_delete(hash_table_t *ht)
{
unsigned long int i;
hash_table_t *head = ht;
hash_node_t *current_node, *next_node;


for (i = 0; i < ht->size; i++)
{
if (ht->array[i] != NULL)
{
current_node = ht->array[i];
while (current_node != NULL)
{
next_node = current_node->next;
free(current_node->key);
free(current_node->value);
free(current_node);
current_node = next_node;
}
}
}

free(head->array);
free(head);
}
