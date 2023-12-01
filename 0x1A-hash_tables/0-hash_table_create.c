#include "hash_tables.h"

/**
* hash_table_create - Creates a hash table.
* @size: The size of the array.
*
* Return: A pointer to the newly created hash table, or NULL if an error occurs.
*/
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *hsh_table = NULL;
unsigned long int i;

if (size < 1)
return (NULL);

hsh_table = malloc(sizeof(hash_table_t));
if (hsh_table == NULL)
return (NULL);

hsh_table->array = malloc(sizeof(hash_node_t *) * size);
if (hsh_table->array == NULL)
{
free(hsh_table);
return (NULL);
}

for (i = 0; i < size; i++)
{
hsh_table->array[i] = NULL;
}

hsh_table->size = size;

return (hsh_table);
}
