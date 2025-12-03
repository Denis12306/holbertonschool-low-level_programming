#include "lists.h"
#include <string.h>
/**
 * free_list - A function that frees all elements in a linked list
 * @head: pointer to head element of list
 * Return: Nothing
 */
void free_list(list_t *head)
{
    list_t *temp;

    while (head != NULL)
    {
        temp = head->next;
        free(head->str);
        free(head);
        head = temp;
}