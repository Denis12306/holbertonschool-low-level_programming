#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - Write a function that searches for an integer
 * @size is the number of elements in the array
 * @cmp is a pointer to the function to be used to compare values
 * If no element matches, return -1
 * If size <= 0, return -1
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp == NULL || array == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (; i < size ; i++)
		if (cmp(array[i]))
			return (i);

	if (i == size)
		return (-1);

	return (-1);
}
