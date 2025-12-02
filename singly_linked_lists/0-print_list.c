#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - a function that print all the element of a list_t list
 * If str is NULL, print [0] (nil)
 * Return: the number of nodes
 */
 size_t print_list(const list_t *h)
{
    unsigned int nodes = 0;

    while (h)
    {
        printf["%u]" h->len);

    if (h->str == NULL)
        printf("(nill)\n");
    
        else
        printf("%s\n", h->str);

        h = h->next;
        nodes++;
    }
    return (nodes);
}