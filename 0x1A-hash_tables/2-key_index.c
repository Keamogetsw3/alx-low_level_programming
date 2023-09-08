#include "hash_tables.h"

/** key_index - Calculate the index where a key should be stored in a hash table.
 * @key: The key to hash.
 * @size: The size of the hash table.
 *
 * Return: The index at which the key should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int hsh_table = 0;

    hsh_table = hash_djb2(key);
    
    return (hsh_table % size);
}
