#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - Inserts a new node at a given index
 * in a doubly linked list.
 * @h: Pointer to pointer to head of list.
 * @idx: Position where to insert the new node.
 * @n: Value of the new node.
 * Return: Pointer to new node, or NULL if failure.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node, *temp;
    unsigned int i = 0;

    if (!h)
        return (NULL);

    new_node = malloc(sizeof(dlistint_t));
    if (!new_node)
        return (NULL);

    new_node->n = n;
    new_node->next = NULL;
    new_node->prev = NULL;

    /* CASE 1 : insert at head (idx == 0) */
    if (idx == 0) 
    {
        new_node->next = *h;
        if (*h)
            (*h)->prev = new_node;
        *h = new_node;
        return (new_node);
    }

    /* CASE 2 : insert at index > 0 */
    temp = *h;
    while (temp && i < idx - 1)
    {
        temp = temp->next;
        i++;
    }

    /* idx out of range */
    if (!temp)
    {
        free(new_node);
        return (NULL);
    }

    /* Insert after temp */
    new_node->next = temp->next;
    new_node->prev = temp;

    if (temp->next)
        temp->next->prev = new_node;

    temp->next = new_node;

    return (new_node);
}
