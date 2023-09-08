#include "hash_tables.h"
/**
 * key_index - a function that gives you the index of a key
 * @key: the key to get the index for
 * @size: size of the hash table
 *
 * Return: the index for the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long size){
    return (hash_djb2(key) % size);
}
