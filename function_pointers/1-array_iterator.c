#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - function that execute a function given
 * as a parameter on each element of an array
 * @i is an input integer
 * @size is the size of the array
 * @action is a pointer to the function we use
 * Return void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;
	
	if (action == NULL || array == NULL)
		return;
	for (; i < size ; i++)
		action(array[i]);
}
