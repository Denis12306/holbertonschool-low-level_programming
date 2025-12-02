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
    size_t s = 0;

    while (h)
{
    if (!= h-> str)
        printf("[0] (nil)\n");

    else
    printf("[%u] %s\n", h->len, h->str");
        h =h->next;
        h++;
}
return (s);
}