#include "lists.h"
#include <stddef.h>
/**
 * dlistint_len: returns the number of elements in a dlistint_t list
 * @h: pointer to the beginning of linked list
 *
 * Return: returns the number of nodes
 */
size_t dlistint_len(const dlistint_t *h){
    size_t i;

    for(i = 0; h != NULL; i++)
        h = h->next;

    return (i);
}
