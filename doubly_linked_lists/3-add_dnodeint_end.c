#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - A function that adds a node to the end of list.
 * @head: The double pointer to the head.
 * @n: The data to add to new node.
 * Return: pointer to new element, NULL on failure.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new_node;

    if (head == NULL || tail == NULL)
        return (NULL);

    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = n;
    new_node->next = NULL;
    new_node->prev = *tail;

    if (*head == NULL)
    {
        *head = new_node;
        *tail = new_node;
        return (new_node);
    }

    (*tail)->next = new_node;
    *tail = new_node;

    return (new_node);
}