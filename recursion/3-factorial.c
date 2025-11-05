#include "main.h"
#include <stdio.h>
/**
 * factorial - print the factorial of a number
 * If n is lower than 0, the function should return -1 to indicate an error
 * @n is an input interger
 * Return: the factorial of @n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
