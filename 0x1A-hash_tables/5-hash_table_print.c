#include "hash_tables.h"

/**
* hash_table_print - Prints the keys and values of the hash table.
* @ht: A pointer to the hash table.
*
* Return: nothing
*/
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i;
hash_node_t *current_node;
char *sep;

if (ht == NULL)
return;

printf("{");
sep = "";

for (i = 0; i < ht->size; i++)
{
current_node = ht->array[i];
while (current_node != NULL)
{
printf("%s'%s': '%s'", sep, current_node->key, current_node->value);
sep = ", ";
current_node = current_node->next;
}
}
printf("}\n");
}
