#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Write a function that print a name
 * @name: name of the person
 * @f : function to print name
 * Return void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
